#include "main.h"
#include <ctype.h>
/**
*_islower - Checks if an alphabet is lowercase or not
*@c: the input character
*Return: returns 1 f lowercase, 0 if uppercase
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
