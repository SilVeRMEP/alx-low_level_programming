#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
    return (sqrt_helper(1, n / 2, n));
}

/**
 * sqrt_helper - recursively finds square root of n
 * @left: left endpoint of binary search interval
 * @right: right endpoint of binary search interval
 * @n: number to find square root of
 *
 * Return: square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int left, int right, int n)
{
    int mid;

    if (n < 0)
        return (-1);
    if (n == 0 || n == 1)
        return (n);

    mid = (left + right) / 2;
    if (mid * mid == n)
        return (mid);
    else if (mid * mid < n)
    {
        if (mid + 1 <= right)
            return (sqrt_helper(mid + 1, right, n));
        else
            return (-1);
    }
    else
    {
        if (left <= mid - 1)
            return (sqrt_helper(left, mid - 1, n));
        else
            return (-1);
    }
}
