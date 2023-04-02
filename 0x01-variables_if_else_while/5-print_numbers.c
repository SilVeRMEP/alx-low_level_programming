#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints the numbers from 0 to 9.
 *
 * Return: Always 0.
 */
int	main(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
