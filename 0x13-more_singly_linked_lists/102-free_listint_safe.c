#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - This function frees a list in safe mode.
 * @head: The head of the list.
 *
 * Return: The size of the list.
 */

size_t free_listint_safe(listint_t **head)
{
	listint_t *tmp_node, *current_node;
	size_t counter;
	int rest;

	counter = 0, current_node = *head;
	while (current_node)
	{
		rest = current_node - current_node->next;
		if (rest > 0)
		{
			tmp_node = current_node->next;
			free(current_node);
			current_node = tmp_node;
			counter++;
		}

		else
		{
			free(current_node);
			*head = NULL;
			counter++;
			break;
		}
	}

	*head = NULL;
	return (counter);
}

