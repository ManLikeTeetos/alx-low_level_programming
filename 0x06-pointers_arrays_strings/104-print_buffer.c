#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int j, start;

	for (j = 0; j < size; j += 10)
	{
		printf("%08x: ", j);

		for (start = 0; start < 10; start++)
		{
			if ((start + j) >= size)
				printf("  ");
			else
				printf("%02x", *(b + start + j));
			if ((start % 2) != 0 && start != 0)
				printf(" ");
		}
		for (start = 0; start < 10; start++)
		{
			if ((start + j) >= size)
				break;
			else if (*(b + start + j) >= 31 &&
				 *(b + start + j) <= 126)
				printf("%c", *(b + start + j));
			else
				printf(".");
		}
		if (j >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
