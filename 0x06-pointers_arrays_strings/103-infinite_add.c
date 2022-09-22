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
int ji, j2, m, r, o, p, q, n;

r = *n1 + *n2;
j1 = strlen(n1);
j2 = strlen(n2);

if ((j1 > size_r) || (j2 > size_r))
{
return (0);
}
for (q -= 1, r -= 1, o = 0; o < size_r - 1; q--, r--, o++)
{
n = q;
if (q >= 0)
n += n1[q] - '0';
if (n >= 0)
n += n2[r] - '0';
if (q < 0 && r < 0 && n == 0)
{
break;
}
q = n / 10;
r[o] = n % 10 + '0';
}
r[o] = '\0';
if (q >= 0 || r >= 0 || q)
return (0);
for (o -= 1, p = 0; p < o; o--, p++)
{
q = r[o];
r[o] = r[p];
r[p] = q;
}

return (r);

}
