#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints the lowercase alphabet in reverse order using putchar.
 *
 * Return: Always 0.
 */
int	main(void)
{
	char	n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
