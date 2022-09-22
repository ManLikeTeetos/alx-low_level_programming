#include "main.h"
#include <string.h>
/**
 *infinite_add - add two numbers together
 *@n1: First number
 *@n2: Second number
 *@r: buffer that the function will use to store the result
 *@size_r: is the buffer size
 *Return: returns the summation or zero if its greater than buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int j1, j2, op, bg, dr1, dr2, add = 0;

j1 = strlen(n1);
j2 = strlen(n2);

if (j1 >= j2)
		bg = j1;
	else
		bg = j2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	j1--, j2--, size_r--;
	dr1 = *(n1 + j1) -48, dr2 = *(n2 + j2) -48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (j1 > 0)
			j1--, dr1 = *(n1 + j1) -48;
		else
			dr1 = 0;
		if (j2 > 0)
			j2--, dr2 = *(n2 + j2) -48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
