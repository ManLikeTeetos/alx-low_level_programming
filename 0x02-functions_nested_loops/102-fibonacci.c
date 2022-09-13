#include <stdio.h>
/**
*main - main block
*Return: Always zero (success)
*/
int main(void)
{
	long int l, m, n, new;

	m = 1;
	n = 2;

	for (l = 1; l <= 50; ++l)
	{
		if (m != 20365011074)
		{
			printf("%ld, ", m);
		} else
		{
			printf("%ld\n", m);
		}
		new = m + n;
		m = n;
		n = new
	}
	return (0);
}

