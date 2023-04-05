#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n, or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
    /* Base case: 0 and 1 have a natural square root of itself */
    if (n == 0 || n == 1)
        return n;

    /* Recursive case: find the square root of n / 2 */
    int sqrt_n = _sqrt_recursion(n / 2);

    /* If the square of the result is equal to n, we've found the square root */
    if (sqrt_n * sqrt_n == n)
        return sqrt_n;

    /* If the square of the result is less than n, try again with n / 2 */
    else if (sqrt_n * sqrt_n < n)
        return _sqrt_recursion(n);

    /* Otherwise, n doesn't have a natural square root */
    else
        return -1;
}
