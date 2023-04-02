#include <stdio.h>

/**
 * main - Prints all possible combinations of three two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main() {
    int i = 0, j = 0;
    while (i <= 99) {
        j = i + 1;
        while (j <= 99) {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(' ');
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');
            if (i != 98 || j != 99) {
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
    }
    return 0;
}

