#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - adds the number of bits needed to be flipped to get from one
 *             number to another.
 * @num1: The first number
 * @num2: The second number to flip num1 to
 *
 * Return: The important number of bits to flip to get from num1 to num2.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned long int xor_val = num1 ^ num2, bits_count = 0;

	while (xor_val > 0)
	{
		bits_count += (xor_val & 1);
		xor_val >>= 1;
	}

	return (bits_count);
}

