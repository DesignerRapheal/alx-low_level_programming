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
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
