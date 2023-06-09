# include "main.h"

/**
 * swap_char - function that swaps the values of two integers.
 * @a: arg 1.
 * @b: arg 2.
 */
void swap_char(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

/**
 * reverse_array - function that reverses the content
 * of an array of integers.
 * @a: Arg 1.
 * @n: Arg 2.
 */
void	reverse_array(int *a, int n)
{
	int	i;
	int	j;

	i = n - 1;
	j = 0;
	while (j < n / 2)
	{
		swap_char(a + j, a + i);
		j++;
		i--;
	}
}
