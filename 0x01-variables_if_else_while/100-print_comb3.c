#include <stdio.h>

/**
*main - print all two-digit numbers with no repeated digits
*Return: Always 0 (Success)
*/

int main(void)
{
int tens_digit;
int ones_digit;
int print_comma = 0; 
for (tens_digit = 0; tens_digit < 10; tens_digit++) 
{
    for (ones_digit = 0; ones_digit < 10; ones_digit++) 
    {
        if (tens_digit != ones_digit)
        {
            putchar(tens_digit + '0');
            putchar(ones_digit + '0');

            
            if (!(tens_digit == 9 && ones_digit == 9))
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
