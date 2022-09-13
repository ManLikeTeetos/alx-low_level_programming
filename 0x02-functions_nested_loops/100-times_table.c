#include "main.h"
/**
*print_times_table - Prints the n times table
*@n: number of times, less than 15 greater than or equal to zero
*/
void print_times_table(int n)
{
	int m, f, a;
	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (f = 0; f <= n; f++)
			{
				a = f * m;
				if (f == 0)
				{
					_putchar(a + '0');
				}

				if (a < 10 && f != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(a + '0');
				} else if (a >= 10)
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
}
