#include "lists.h"
/**
 * sum_dlistint - Calculates the sum of all values in a list
 * @head: Head of the list
 *
 * Return: Sum total of the values in the list
 * author - designerrapheal
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (count);
	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
