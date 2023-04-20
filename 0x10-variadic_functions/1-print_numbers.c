#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: the variable arguments passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		int digits = 1;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
			digits++;
		}
		va_end(args);
		va_start(argd, n);
		for (unsigned int j = 0; j < i; j++)
		{
			va_arg(args, int);
		}
		for (int k = 0; k < digits; k++)
		{
			_putchar(va_arg(args, int) + '0');
		}
		if (separator != NULL && i < n - 1)
			for (unsigned int j = 0; sperator[j]; j++)
				_putchar(sperator[j]);
	}

	va_end(args);

	_putchar('\n');
}
