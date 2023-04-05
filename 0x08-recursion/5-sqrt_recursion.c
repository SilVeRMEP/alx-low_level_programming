#include "main.h"

/**
 * _sqrt_recursion - helper function to calculate the square root recursively
 * @n: the number to calculate the square root of
 * @i: the square root
 *
 * Return: the square root of n if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - helper function to find square root recursively
 * @n: input number
 * @i: potential square root value
 * Return: natural square root of a number, -1 if not found
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_recursion_helper(n, i + 1));
}
