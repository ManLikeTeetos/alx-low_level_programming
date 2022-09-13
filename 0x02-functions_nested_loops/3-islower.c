#include "main.h"
#include <ctype.h>
/**
*_islower - Checks if an alphabet is lowercase or not
*/
int _islower(int c)
{
	if(islower(c))
	{
		return (1);
	} else {
		return (0);
	}
}
