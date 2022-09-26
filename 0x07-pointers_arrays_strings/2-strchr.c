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
int p;
p = 0;
p = strchr(s, c);
if (p != 0)
{
return (p);
}
else
{
return (NULL);
}
}
