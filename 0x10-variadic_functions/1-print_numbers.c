#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: the variable arguments passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		char buf[32];
		int len = sprintf(buf, "%d", num);
		int j;

		for (j = 0; j < len; j++)
		{
			_putchar(buf[j]);
		}

		if (i != n - 1 && separator != NULL)
		{
			int sep_len = strlen(separator);

			for (j = 0; j < sep_len; j++)
			{
				_putchar(separator[j]);
			}
		}
	}

	va_end(args);

	_putchar('\n');
}
