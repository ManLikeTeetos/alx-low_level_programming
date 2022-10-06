#include <stdlib.h>
#include "main.h"

/**
 * *_filler - fills memory with a constant byte
 * @s: memory to be fill
 * @b: char to copy
 * @n: number of times
 *
 * Return: pointer to the memory area s
 */
char *_filler(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_filler(ptr, 0, nmemb * size);

	return (ptr);
}
