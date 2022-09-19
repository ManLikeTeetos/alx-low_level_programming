#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
*puts2 - prints one char out of 2 of a string
*followed by a new line
*@str: string to print the chars from
*/
void puts2(char *str)
{
int len, i;

len = 0;

len = strlen(str);

for (i = 0; i < len; i += 2)
{
putchar(str[i]);
}

putchar('\n');
}
