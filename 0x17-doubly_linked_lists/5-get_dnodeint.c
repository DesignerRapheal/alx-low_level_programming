#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves the node value at a specified index
 * @head: Head of the doubly linked list
 * @index: Index of the node to retrieve
 *
 * Return: The node at the specified index,
 * or NULL if index is out of range
 * author - designerrapheal
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index)
	{
		if (head->next != NULL)
			head = head->next;
		else
			return (NULL);
		index--;
	}
	return (head);
}
