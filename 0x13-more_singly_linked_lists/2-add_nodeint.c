#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_at_beginning - adds a new node at the beginning of list
 * @list_head: pointer to the head of the list
 * @value: value to add
 *
 * Return: pointer to the newly added node
 */
list_t *add_node_at_beginning(list_t **list_head, const int value)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->next = *list_head;
	*list_head = new_node;

	return (new_node);
}
