#include "main.h"

/**
 * is_prime_number - function that returns 1 if n is prime number
 * @n: number to be checked
 *
 * Return: 1 if is prime, 0 otherwise
 */

int is_prime_number(int n)

{
	int start = n / 2;
	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime_number - function that returns 1 if n is prime
 * @n: number to be checked
 * @start: number to begin checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
