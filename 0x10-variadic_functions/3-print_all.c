#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * ...: The arguments to print.
 *
 * Return: Always void.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    const char *p = format;
    char c_arg;
    int i_arg;
    double f_arg;
    char *s_arg;

    va_start(args, format);

    while (p && *p)
    {
        switch (*p)
        {
            case 'c':
                c_arg = va_arg(args, int);
                printf("%c", c_arg);
                break;

            case 'i':
                i_arg = va_arg(args, int);
                printf("%d", i_arg);
                break;

            case 'f':
                f_arg = va_arg(args, double);
                printf("%f", f_arg);
                break;

            case 's':
                s_arg = va_arg(args, char *);
                if (s_arg == NULL)
                    printf("(nil)");
                else
                    printf("%s", s_arg);
                break;

            default:
                break;
        }

        if (*(p + 1))
            printf(", ");

        ++p;
    }

    va_end(args);

    printf("\n");
}

