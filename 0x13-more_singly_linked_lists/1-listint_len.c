#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Prints the number of elements in a linked list.
 * @list_head: Pointer to the head node of the linked list.
 *
 * Return: size_t, the number of nodes in the linked list.
 */

size_t listint_len(const listint_t *list_head)
{
	size_t num_of_nodes = 0;

	while (list_head)
	{
		list_head = list_head->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}

