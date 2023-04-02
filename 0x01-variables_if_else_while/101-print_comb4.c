#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all combinations of three different digits
 * Return: Always 0 (Success)
 */

int	main(void)
{
	int	W;
	int	j;
	int	A;

	W = 0;
	while (W < 10)
	{
		E = W + 1;
		while (E < 10)
		{
			A = E + 1;
			while (A < 10)
			{
				putchar('0' + W);
				putchar('0' + E);
				putchar('0' + A);
				if (W != 7 || E != 8 || A != 9)
				{
					putchar(',');
					putchar(' ');
				}
				A++;
			}
			E++;
		}
		W++;
	}
	putchar('\n');
	return (0);
}
