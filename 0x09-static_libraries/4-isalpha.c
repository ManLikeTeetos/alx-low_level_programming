#include "main.h"
#include <ctype.h>
/**
*_isalpha - Checks if an alphabet is a letter, lowercase or uppercase
*@c: the input character
*Return: returns 1 if true, 0 if false
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
