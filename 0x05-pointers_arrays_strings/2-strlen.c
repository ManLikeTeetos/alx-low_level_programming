#include "main.h"

/**
*_strlen - returns the length of a string
*@c: pointer to char c
*return: length
*/
int _strlen(char *s)
{
int d;
char arr[];

strncpy(arr, s);
d = strlen(arr);
return (d);
}
