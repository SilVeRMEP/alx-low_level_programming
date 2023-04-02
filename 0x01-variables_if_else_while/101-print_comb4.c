#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>


/**
 * main - Prints all combinations of three different digits
 * Return: Always 0 (Success)
 */

int	main(void)
{
	int	i;
	int	j;
	int	m;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			m = j + 1;
			while (m < 10)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + m);
				if (i != 7 || j != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
				m++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
