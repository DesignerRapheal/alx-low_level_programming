#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the figure of a bit to 0 at a given index.
 *
 * @n: A pointer to the number to make modifications.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if the bit was successfully set to 0, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *num, unsigned int idx)
{
	unsigned long int mask;

	if (idx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = ~(1UL << idx);
	*num &= mask;

	return (1);
}

