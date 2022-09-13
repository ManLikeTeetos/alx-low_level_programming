#include <stdio.h>
/**
*main - computes and prints the sum of all the multiplesof 3 or 5 below 1024
*Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long int num1, num2, num3;
	int i;

	num1 = 0;
	num2 = 0;
	num3 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			num1 = num1 + i;
		} else if ((i % 5) == 0)
		{
			num2 = num2 + i;
		}
	}
	num3 = num1 + num2;
	printf("%lu\n", num3);
	return (0);
}
