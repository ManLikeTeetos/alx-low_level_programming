#include "main.h"
#include <ctype.h>
/**
*_islower - Checks if an alphabet is lowercase or not
*/
int _islower(int c)
{
	if(islower(c))
	{
		_putchar(1);
	} else {
		_putchar(0);
	}
}
