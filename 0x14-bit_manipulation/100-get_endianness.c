#include "main.h"
#include <stdint.h>

/**
 * get_endianness - determines the endianness of the system
 *
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int number = 1;
	char *pointer = (char *)&number;

	if (*pointer == 1)
		return (1);
	else
		return (0);
}

