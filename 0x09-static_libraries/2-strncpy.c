#include "main.h"
#include <string.h>

/**
 *_strncpy - copies a string
 *@dest: string to copy to
 *@src: string copied
 *@n: number of characters to copy
 *Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
