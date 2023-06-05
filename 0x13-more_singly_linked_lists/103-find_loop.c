#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *walker, *runner;

	if (head == NULL || head->next == NULL)
		return (NULL);

	walker = head->next;
	runner = (head->next)->next;

	while (runner && runner->next)
	{
		if (walker == runner)
		{
			walker = head;
			while (walker != runner)
			{
				walker = walker->next;
				runner = runner->next;
			}
			return (walker);
		}
		walker = walker->next;
		runner = (runner->next)->next;
	}

	return (NULL);
}
