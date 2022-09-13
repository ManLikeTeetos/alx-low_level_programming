#include "main.h"
/**
*print_alphabet_x10 - prints the alphabets in small letters ten times
*/
void print_alphabet_x10(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
