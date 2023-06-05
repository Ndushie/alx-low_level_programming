#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temporary;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temporary = *head;
		while (temporary->next != NULL)
			temporary = temporary->next;
		temporary->next = newNode;
	}

	return (newNode);
}
