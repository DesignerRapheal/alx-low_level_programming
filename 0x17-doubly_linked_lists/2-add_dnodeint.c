#include "lists.h"
/**
 * add_dnodeint - Inserts a new node at the beginning of 
 * a doubly linked list
 * @head: Address of the head of the doubly linked list
 * @n: Data value for the new node
 *
 * Return: Address of the newly inserted node, 
 * or NULL if insertion fails
 * author - designerrapheal
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
