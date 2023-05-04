#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits you would need to flip to get from one number to
 * another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int count = 0;

	flip = n ^ m;
	while (flip > 0)
	{
		if (flip & 1)
			count++;
		flip >>= 1;
	}
	return (count);
}
