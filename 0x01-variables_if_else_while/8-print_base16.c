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
for (alph = '0'; alph <= '9'; alph++)
	putchar(alph);
for (alph = 'a'; alph <= 'f'; alph++)
	putchar(alph);
putchar('\n');
return (0);

}
