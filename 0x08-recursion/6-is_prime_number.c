#include "main.h"

/**
 * is_divisible - checks if n is divisible by divisor
 * @n: the number to check for divisibility
 * @divisor: the divisor to check against
 *
 * Return: 1 if n is divisible by divisor, 0 otherwise
 */
{
	if (divisor == 1)
		return (0);
	if (n % divisor == 0)
		return (1);
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_divisible(n, n - 1));
}
