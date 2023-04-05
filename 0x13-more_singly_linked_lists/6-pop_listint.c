#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to the pointer to the head node of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp_node = *head;
	data = temp_node->n;
	*head = temp_node->next;
	free(temp_node);

	return (data);
}
