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
	char	T;

	T = 'z';
	while (T >= 'a')
	{
		putchar(T);
		T--;
	}
	putchar('\n');
	return (0);
}
