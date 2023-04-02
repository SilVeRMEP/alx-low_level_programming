#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 *main - print numbers 0-9 separated with commas and a space, using putchar
 *Return: Always 0 (Success)
 */
int main(void)
int	main(void)
{
	int	Q;

	Q = '0';
	while (Q <= '9')
	{
		putchar(Q);
		if (Q != '9')
		{
			putchar(',');
			putchar(' ');
		}
		Q++;
	}
	putchar('\n');
	return (0);
}
