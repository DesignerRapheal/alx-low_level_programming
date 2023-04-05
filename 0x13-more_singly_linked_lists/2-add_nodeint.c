#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @list_head: A pointer to the head of the list.
 * @value: The value to add.
 *
 * Return: A pointer to the new node added.
 */

listint_t *add_nodeint(listint_t **list_head, const int value)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->next = *list_head;
	*list_head = new_node;

	return (new_node);
}
