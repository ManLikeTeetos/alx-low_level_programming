#include "main.h"
#include <string.h>

/**
*_strpbrk - searches string of any byte
*@s: string pointer
*@accept: substring
*Return: returns p
*/

char *_strpbrk(char *s, char *accept)
{
char *p;

p = strpbrk(s, accept);
if (p != 0)
{
return (p);
}
else
{
return (NULL);
}
}
