#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}

	return (node_num);
}

