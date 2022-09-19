#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
*puts_half - prints half of a string
*followed by a new line
*@str: string to print the chars from
*/
void puts_half(char *str)
{
int len, n, i;

len = 0;

len = strlen(str);

if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
putchar(str[i]);
}
}
else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; n++)
{
putchar(str[n + 1]);
}
}
putchar('\n');
}
