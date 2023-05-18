#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a node at 
 * a specified index in a doubly linked list
 * @h: Address of the head of the list
 * @idx: Index to add the node at
 * @n: Value of the node
 *
 * Return: Address of the new node, or NULL if insertion fails
 * author - designerrapheal
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *temp, *next;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	current = *h;

	while (idx > 1)
	{
		if (current != NULL)
			current = current->next;
		else
			return (NULL);
		idx--;
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	next = current->next;
	current->next = temp;
	next->prev = temp;
	temp->prev = current;
	temp->next = next;
	return (temp);
}
