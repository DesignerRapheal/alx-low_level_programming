#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: a pointer to the first node of the linked list
 *
 * Return: the sum of all the data (n) of the linked list,
 * or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	/* Traverse the linked list and accumulate the sum of all data (n) */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
