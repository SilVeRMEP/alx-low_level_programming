#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
 int len = 0, i = 0;

 if (s == NULL)
  return (0);
  while (s[len] != '\0')
   len++;
  while (i < len / 2)
  {
   if (s[i] != s[len - i - 1])
    return (0);
     i++;
  }
 return (1);
}