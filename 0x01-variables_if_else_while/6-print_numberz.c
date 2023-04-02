#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 *main - print 0123456789 using putchar
 *Return: Always 0 (Success)
 */
int	main(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
