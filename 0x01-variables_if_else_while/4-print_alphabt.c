#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main-main block
*Return: Always 0 (success)
*/
int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
	if (alph != 'q' && alph != 'e')
		putchar(alph);
putchar('\n');
return (0);

}
