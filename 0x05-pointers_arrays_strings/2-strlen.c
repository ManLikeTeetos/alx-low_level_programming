#include "main.h"
#include <string.h>

/**
*_strlen - returns the length of a string
*@c: pointer to char c
*return: length
*/
int _strlen(char *s)
{
int d;
char arr[99];

strncpy(arr, s, 99);
arr[99] = 0;
d = strlen(arr);
return (d);
}
