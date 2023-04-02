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

if (randomNumber > 0)
{
    printf("%i is positive\n", randomNumber);
}
else if (randomNumber == 0)
{
    printf("%i is zero\n", randomNumber);
}
else
{
    printf("%i is negative\n", randomNumber);
}

return (0);
}

