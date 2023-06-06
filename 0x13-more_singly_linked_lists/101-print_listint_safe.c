#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count_of_nodes = 0;
	const listint_t *current = head;
	const listint_t *next = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count_of_nodes++;

		next = current->next;
		if (next = current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}

		current = current->next;
	}

	return (count_of_nodes);
}
