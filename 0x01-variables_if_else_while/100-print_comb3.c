#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i = 0;

    while (i < 90)
    {
        if (i % 10 != i / 10)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');

            if (i < 89)
            {
                putchar(',');
                putchar(' ');
            }
        }

        i++;
    }

    return (0);
}
