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
int num3;
for (num = '0'; num <= '9'; num++)
{
	for (num2 = num + 1; num2 <= '9'; num2++)
	{
		for(num3 = num2 + 1; num3 <= '9'; num3++)
		{
			putchar(num);
			putchar(num2);
			putchar(num3);
			if (num != '9' || num2 != '8')
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