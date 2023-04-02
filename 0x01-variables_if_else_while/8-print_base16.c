#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the hexadecimal numbers from 0 to f using putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c = '0';

	while (c <= 'f')
	{
		if (c <= '9' || (c >= 'a' && c <= 'f')) /* print only valid hexadecimal characters */
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
