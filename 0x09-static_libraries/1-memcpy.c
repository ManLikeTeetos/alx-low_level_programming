#include "main.h"
#include <string.h>
/**
*_memcpy - copies memory area
*@dest:copy to
*@src:copy from
*@n: number of characters
*Return: It returns dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
