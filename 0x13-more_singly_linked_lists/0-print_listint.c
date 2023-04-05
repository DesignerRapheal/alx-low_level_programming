#include "lists.h"

/**
 * print_integer_list - prints all the elements of an integer list
 * @head: head of the list
 *
 * Return: number of elements in the list
 */
size_t print_integer_list(const int_list_t *head)
{
	size_t num_nodes = 0;
	const int_list_t *current_node = head;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->value);
		current_node = current_node->next;
		num_nodes++;
	}

	return (num_nodes);
}

