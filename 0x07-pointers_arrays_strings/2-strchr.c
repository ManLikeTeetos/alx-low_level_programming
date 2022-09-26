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
char *p
p = NULL
p = strchr(s, c);
return (p);
}
