#include "main.h"
#include <string.h>
/**
*_memset - fills memory with a constant byte
*@s:pointer
*@b:variable to hold byte
*@n: number of characters
*Return: It returns b
*/
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (b);

}
