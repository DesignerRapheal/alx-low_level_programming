#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory usong malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to rhe allocted memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
