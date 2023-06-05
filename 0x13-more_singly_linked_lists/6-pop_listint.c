#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temporary;

	if (*head == NULL) /* Empty list */
		return (0);

	temporary = *head; /* Store the current head node */
	data = temporary->n; /* Get the data of the head node */
	*head = temporary->next; /* Update the head pointer to the next node */
	free(temporary); /* Free the original head node */

	return (data);
}
