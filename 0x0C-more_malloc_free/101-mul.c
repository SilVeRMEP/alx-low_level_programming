#include "main.h"
#include <ctype.h>

int multiply(int num1, int num2);
int is_valid_number(char *num);
void print_error_and_exit(void);

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of strings containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		print_error_and_exit();
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		print_error_and_exit();
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	int quotient = result;
	int remainder;
	int count = 0;

	if (result == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	while (quotient != 0)
	{
		quotient = quotient / 10;
		count++;
	}

	char *result_str = malloc((count + 1) * sizeof(char));

	if (result_str == NULL)
	{
		print_error_and_exit();
	}
	quotient = result;
	result_str[count] = '\n';
	while (quotient != 0)
	{
		remainder = quotient % 10;
		result_str[--count] = remainder + '0';
		quotient = quotient / 10;
	}
	for (int i = 0; i <= count; i++)
	{
		_putchar(result_str[i]);
	}

	return (0);
}

/**
 * multiply - Multiplies two integers
 * @num1: First integer
 * @num2: Second integer
 *
 * Return: Result of the multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * is_valid_number - Checks if a string represents a valid positive integer
 * @num: String to be checked
 *
 * Return: 1 if the string represents a valid positive integer 0 otherwise
 */
int is_valid_number(char *num)
{
	int i;

	if (*num == '\0')
		return (0);

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isdigit(num[i]))
			return (0);
	}

	return (1);
}

/**
 * print_error_and_exit - Prints "Error\n" and exits with a status of 98
 */
void print_error_and_exit(void)
{
	char error[] = "Error\n";
	int i;

	for (i = 0; error[i] != '\0'; i++)
	{
		_putchar(error[i]);
	}
	exit(98);
}
