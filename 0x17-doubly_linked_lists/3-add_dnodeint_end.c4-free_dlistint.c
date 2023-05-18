#include "lists.h"
/**
 * add_dnodeint_end - Inserts a new node at the end 
 * of a doubly linked list
 * @head: Address of the head of the doubly linked list
 * @n: Data value for the new node
 *
 * Return: Address of the newly inserted node, or NULL if insertion fails
 * auhor - designerrapheal
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = temp;
	temp->prev = current;
	return (temp);
}
