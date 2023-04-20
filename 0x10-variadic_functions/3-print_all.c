#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Prints anything based on a given format.
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char *
 *          Any other char should be ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";
	print_format formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (formats[j].type)
		{
			if (formats[j].type == format[i])
			{
				printf("%s", separator);
				formats[j].func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

/**
 * print_char - Prints a char.
 * @args: A list of arguments.
 */
void print_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
}

/**
 * print_int - Prints an int.
 * @args: A list of arguments.
 */
void print_int(va_list args)
{
	int n = va_arg(args, int);

	print_number(n);
}

/**
 * print_float - Prints a float.
 * @args: A list of arguments.
 */
void print_float(va_list args)
{
	float f = (float)va_arg(args, double);

	print_number((int)f);
	_putchar('.');
	if (f < 0)
		f *= -1;
	print_number((int)((f - (int)f) * 1000000));
}

/**
 * print_string - Prints a string.
 * @args: A list of arguments.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
