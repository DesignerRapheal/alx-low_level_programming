#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @list_head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *list_head)
{
	size_t num_of_nodes = 0;
	const listint_t *current_node = list_head;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}

