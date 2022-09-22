#include "main.h"
#include <string.h>
/**
 *infinite_add - add two numbers together
 *@n1: First number
 *@n2: Second number
 *@r: buffer that the function will use to store the result
 *@size_r: is the buffer size
 *Return: returns the pointer
 *of the summation or zero if its greater than buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int j1, j2, a, b, c, l, m, n;


j1 = strlen(n1);
j2 = strlen(n2);

if ((j1 > size_r) || (j2 > size_r))
{
return (0);
}
m = 0;
for (a -= 1, b -= 1, c = 0; c < size_r - 1; a--, b--, c++)
{
n = m;
if (a >= 0)
{
n += n1[a] - '0';
}
if (b >= 0)
{
n += n2[b] - '0';
}
if (a < 0 && b < 0 && n == 0)
{
break;
}
m = n / 10;
r[c] = n % 10 + '0';
}
	r[c] = '\0';
	if (a >= 0 || b >= 0 || m)
		return (0);
	for (c -= 1, l = 0; l < c; c--, l++)
	{
		m = r[c];
		r[c] = r[l];
		r[l] = m;
	}

	return (r);

}
