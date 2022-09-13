#include <stdio.h>
/**
*main - main block
*Return: Always zero (success)
*/
int main(void)
{
	int i;
	unsigned long int l, m, n, new;

	l = 1;
	m = 2;

	for (i = 1; i <= 33; ++i)
	{
		if (l != 4000000 && (l % 2) == 0)
		{
			new = new + l;
		}
		n = l + m;
		l = m;
		m = n;
	}
	printf("%lu\n", new);
	return (0);
}

