#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list.
 * @list_head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *list_head)
{
	size_t num_nodes = 0;
	const list_t *current_node = list_head;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		num_nodes++;
	}

	return (num_nodes);
}
