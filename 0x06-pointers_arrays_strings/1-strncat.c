#include "main.h"
#include <string.h>

/**
 *_strncat - concatenates two string with specifier
 *@dest: string to append to
 *@src: string to added
 *@n: number of characters to append
 *Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
