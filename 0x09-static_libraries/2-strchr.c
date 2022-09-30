#include "main.h"
#include <string.h>

/**
*_strchr - locates character in string
*@s: string pointer
*@c: character
*Return: returns p
*/
char *_strchr(char *s, char c)
{
char *p;

p = strchr(s, c);

if (strchr(s, c) != 0)
{
return (p);
}
else
{
return (NULL);
}
}
