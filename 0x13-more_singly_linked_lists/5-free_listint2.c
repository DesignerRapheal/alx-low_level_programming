#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head_ptr: A pointer to a pointer to the head node of the listint_t list.
 *
 * Description:
 *    This function frees a listint_t list, setting the head to NULL.
 *    It frees each node in the list using a temporary pointer to traverse
 *    the list, starting at the head. The head is set to NULL before the
 *    function returns to prevent any further access to the list.
 */
void free_listint2(listint_t **head_ptr)
{
	listint_t *temp_ptr;

	/* Check if the list is empty or NULL */
	if (head_ptr == NULL || *head_ptr == NULL)
		return;

	/* Traverse the list, freeing each node */
	while (*head_ptr)
	{
		temp_ptr = (*head_ptr)->next;
		free(*head_ptr);
		*head_ptr = temp_ptr;
	}

	/* Set the head to NULL to prevent further access to the list */
	*head_ptr = NULL;
}
