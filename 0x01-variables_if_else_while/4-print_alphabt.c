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
	char	n;

	n = 'a';
	while (n <= 'z')
	{
		if (n != 'q' && n != 'e')
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
