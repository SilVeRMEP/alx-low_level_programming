#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all combinations of three different digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit_one;
	int digit_ten;
	int digit_hundred;

	for (digit_hundred = '0'; digit_hundred <= '9'; digit_hundred++) /* Hundreds place */
	{
		for (digit_ten = (digit_hundred + 1); digit_ten <= '9'; digit_ten++) /* Tens = Hundreds + 1 */
		{
			for (digit_one = (digit_ten + 1); digit_one <= '9'; digit_one++) /* Ones */
			{
				putchar(digit_hundred);
				putchar(digit_ten);
				putchar(digit_one);
				if (digit_hundred != '7' || digit_ten != '8' || digit_one != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
