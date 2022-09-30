#include "main.h"
#include <string.h>

/**
*_strspn - length of a prefix substring
*@s: string pointer
*@accept: substring
*Return: returns i
*/
unsigned int _strspn(char *s, char *accept)
{
int i;

i = 0;

i = strspn(s, accept);
return (i);
}
