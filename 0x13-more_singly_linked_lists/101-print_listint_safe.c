#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely even if it contains a loop
 * @head: A pointer to the first node of the linked list.
 *
 * Return: The number of nodes printed.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = NULL;
	const listint_t *check = NULL;
	size_t count = 0;
	size_t check_count;

	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		check = head;
		check_count = 0;
		while (check_count < count)
		{
			if (current == check)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			check = check->next;
			check_count++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}

