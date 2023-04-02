#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print lowercase a-z excluding q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 char L = 'a';

 while (L <= 'z')
{
 if (L != 'q' && L != 'e')
{
  putchar(L);
}
  L++;
}
 putchar('\n');
 return (0);
}
