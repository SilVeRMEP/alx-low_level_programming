#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
int randomNumber;
srand(time(0));


randomNumber = rand() - RAND_MAX / 2;

printf("Last digit of %i is %i and is ", randomNumber, (randomNumber % 10));

if ((randomNumber % 10) == 0)
{
    printf("0\n");
}
else if ((randomNumber % 10) > 5)
{
    printf("greater than 5\n");
}
else
{
    printf("less than 6 and not 0\n");
}

return (0);
}
