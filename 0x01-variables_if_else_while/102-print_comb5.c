#include <stdio.h>

/**
 * main - Prints all possible combinations of three two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
    int tens1, ones1, tens2, ones2, tens3, ones3;

    for (tens1 = 0; tens1 <= 9; tens1++)
    {
        for (ones1 = 0; ones1 <= 9; ones1++)
        {
            for (tens2 = tens1; tens2 <= 9; tens2++)
            {
                int start = (tens1 == tens2) ? ones1 + 1 : 0;

                for (ones2 = start; ones2 <= 9; ones2++)
                {
                    for (tens3 = tens2; tens3 <= 9; tens3++)
                    {
                        int start2 = (tens2 == tens3) ? ones2 + 1 : 0;

                        for (ones3 = start2; ones3 <= 9; ones3++)
                        {
                            putchar(tens1 + '0');
                            putchar(ones1 + '0');
                            putchar(' ');
                            putchar(tens2 + '0');
                            putchar(ones2 + '0');
                            putchar(' ');
                            putchar(tens3 + '0');
                            putchar(ones3 + '0');

                            if (tens1 == 9 && ones1 == 8 && tens2 == 9 && ones2 == 9 && tens3 == 9 && ones3 == 9)
                            {
                                putchar('\n');
                                break;
                            }

                            putchar(',');
                            putchar(' ');
                        }
                    }
                }
            }
        }
    }

    return (0);
}

