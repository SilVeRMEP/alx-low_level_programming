#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 *main - print numbers 0-9 separated with commas and a space, using putchar
 *Return: Always 0 (Success)
 */
int	main(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
