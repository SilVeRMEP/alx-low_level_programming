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
	char	D;

	D = '0';
	while (D <= '9')
	{
		putchar(D);
		D++;
	}
	D = 'a';
	while (D <= 'f')
	{
		putchar(D);
		D++;
	}
	putchar('\n');
	return (0);
}
