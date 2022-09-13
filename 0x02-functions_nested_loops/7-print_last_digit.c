#include "main.h"
#include <stdlib.h>
/**
*print_last_digit - Prints last digit of a number
*@n: Inputted number
*Return : returns the last digit
*/
int print_last_digit(int n)
{
	int c;
	
	c = n % 10;
	c = abs(c);
	_putchar(c + '0');
	return (c);
}
