#include "variadic_functions.h"

/**
 * print_char - Print a char.
 * @arg: A va_list containing the char to print.
 */
void print_char(va_list arg)
{
  char c = va_arg(arg, int);
  _putchar(c);
}

/**
 * print_int - Print an int.
 * @arg: A va_list containing the int to print.
 */
void print_int(va_list arg)
{
  int n = va_arg(arg, int);
  print_number(n);
}

/**
 * print_float - Print a float.
 * @arg: A va_list containing the float to print.
 */
void print_float(va_list arg)
{
  float f = (float)va_arg(arg, double);
  print_number((int)f);
  _putchar('.');
  int decimal = (f - (int)f) * 1000;
  if (decimal < 0)
    decimal *= -1;
  print_number(decimal);
}

/**
 * print_string - Print a string.
 * @arg: A va_list containing the string to print.
 */
void print_string(va_list arg)
{
  char *str = va_arg(arg, char *);
  while (*str)
    _putchar(*(str++));
}

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * ...: The arguments to print.
 *
 * Return: Always void.
 */
void print_all(const char * const format, ...)
{
  int i = 0, j;
  va_list args;
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

  va_end(args);
  _putchar('\n');
}

