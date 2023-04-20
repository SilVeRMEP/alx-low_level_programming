#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;
	char format_char;

	va_start(args, format);

	while (format && format[i])
	{
		format_char = format[i];
		switch (format_char)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}

		if (format[i + 1] != '\0' && (format_char == 'c' || format_char == 'i'
			|| format_char == 'f' || format_char == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
