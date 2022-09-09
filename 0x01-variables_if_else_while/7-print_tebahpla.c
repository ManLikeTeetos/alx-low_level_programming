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
for (alph = 'z'; alph >= 'a'; alph--)
	putchar(alph);
putchar('\n');
return (0);

}
