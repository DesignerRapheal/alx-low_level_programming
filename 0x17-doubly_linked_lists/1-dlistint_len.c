#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list
 * @h: head of the list
 *
 * Return: The number of nodes in the list
 * author - designerrapheal
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nums = 0;

	while (h)
	{
		nums++;
		h = h->next;
	}
	return (nums);
}
