#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped to get from one
 *             number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to be flipped to get from one number to
 *         another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int count = 0;

	while (xor_val > 0)
	{
		count += xor_val & 1;
		xor_val >>= 1;
	}

	return (count);
}

