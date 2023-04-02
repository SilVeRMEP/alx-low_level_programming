#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the numbers from 0 to 9.
 *
 * Return: Always 0.
 */
int	main(void)
{
	char	V;

	V = '0';
	while (V <= '9')
	{
		putchar(V);
		V++;
	}
	putchar('\n');
	return (0);
}
