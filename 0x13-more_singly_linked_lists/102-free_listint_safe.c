#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count_of_list = 0;
	listint_t *current = *h;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;

		if (next >= current)
		{
			/* Cycle detected */
			current->next = NULL;
			break;
		}

		free(current);
		count_of_list++;
		current = next;
	}

	/* Free remaining nodes in the cycle */
	while (next != NULL)
	{
		current = next;
		next = current->next;
		free(current);
		count_of_list++;
	}

	*h = NULL; /* Set the head to NULL */

	return (count_of_list);
}
