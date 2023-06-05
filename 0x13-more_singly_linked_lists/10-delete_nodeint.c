#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position in a list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *current, *temporary;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temporary = *head;
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	current = *head;

	for (a = 0; a < index - 1; a++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	temporary = current->next;
	current->next = temporary->next;
	free(temporary);

	return (1);
}
