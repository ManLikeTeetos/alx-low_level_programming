#include "main.h"
int first_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to check
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (first_prime(n, n - 1));
}

/**
 * first_prime - calculates if a number is prime
 * @n: number
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if it is not
 */
int first_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (first_prime(n, i - 1));
}
