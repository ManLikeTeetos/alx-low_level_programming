#include "main.h"
/**
*times_table - Prints the 9 times table
*/
void times_table(void)
{
	int n, f, a;

	for (n = 0; n < 10; n++)
	{
		for (f = 0; f < 10; f++)
		{
			a = f * n;
			_putchar(a + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
