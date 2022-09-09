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
for (num = 0; num < 10; num++)
{
	for (num2 = num + 1; num2 <= 9; num2++)
	{
		putchar(num + '0');
		putchar(num2 + '0');
		if (num < 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);

}
