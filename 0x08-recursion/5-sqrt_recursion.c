#include "main.h"
int first_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - recurse the natural square root of a number
 * @n: number to find square root
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (first_sqrt_recursion(n, 0));
}

/**
 * first_sqrt_recursion - find natural square root
 * @n: number to calculate
 * @i: iterator
 *
 * Return: the resulting square root
 */
int first_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (first_sqrt_recursion(n, i + 1));
}
