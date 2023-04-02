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
	int	S;

	S = '0';
	while (S <= '9')
	{
		putchar(S);
		S++;
	}
	putchar('\n');
	return (0);
}
