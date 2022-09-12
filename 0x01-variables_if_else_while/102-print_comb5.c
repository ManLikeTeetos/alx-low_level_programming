#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main-main block
*Return: Always 0 (success)
*/
int main(void)
{
int num;
int num2;
for (num = 0; num < 100; num++)
{
	for (num2 = 0; num2 < 100; num2++)
	{
		if (num < num2 )
		{
			putchar((num / 10) + 48);
			putchar((num % 10) + 48);
			putchar(' ');
			putchar((num2 / 10) + 48);
			putchar((num2 % 10) +48);
			if (num != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);

}
