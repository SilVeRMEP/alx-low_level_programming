#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints the hexadecimal numbers from 0 to f using putchar.
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
	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
