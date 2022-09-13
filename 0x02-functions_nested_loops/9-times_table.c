#include "main.h"
/**
*times_table - Prints the 9 times table
*/
void times_table(void)
{
	int n, f, a;

	n = 9;
	for (f = 0; f <= 10; f++)
	{
		a = f * n;
		_putchar(a);
		_putchar(',');
	}
}
