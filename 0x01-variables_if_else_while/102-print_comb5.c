#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void	put(int n)
{
	if (n < 10)
	{
		putchar('0');
		putchar('0' + n);
	}
	else
	{
		putchar('0' + n / 10);
		putchar('0' + n % 10);
	}
}
int	main(void)
{
	int i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			put(i);
			putchar(' ');
			put(j);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}


