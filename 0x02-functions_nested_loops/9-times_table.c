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
			if (a == 0)
			{
				_putchar(a + '0');
			}

			if (a < 10 && a != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			} else if ( a >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
