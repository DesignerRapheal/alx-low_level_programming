#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a given index.
 * @head: Pointer to the head (first element) of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 (Success), or -1 (Fail).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *prev_node = NULL;
	unsigned int node_idx = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && node_idx < index)
	{
		prev_node = current_node;
		current_node = current_node->next;
		node_idx++;
	}

	if (current_node == NULL)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);

	return (1);
}

