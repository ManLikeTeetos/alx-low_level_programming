#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_rev - prints a string in reverse, followed by a new line
* @s: string to be printed
*/
void print_rev(char *s)
{
int i, j;

i = 0;

i = strlen(s);

for (j = i - 1; j >= 0; j--)
{
putchar(s[j]);
}
putchar('\n');
}
