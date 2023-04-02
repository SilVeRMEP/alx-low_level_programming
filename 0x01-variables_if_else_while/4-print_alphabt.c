#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - Print lowercase a-z excluding q and e
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	char	V;

	V = 'a';
	while (V <= 'z')
	{
		if (V != 'e' && n != 'q')
			putchar(V);
		V++;
	}
	putchar('\n');
	return (0);
}
