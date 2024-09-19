#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node in a doubly linked list
 *
 * @head: Pointer to the head node in the doubly linked list
 * @index: The index of the node. Begins at 0
 *
 * Return: The nth node, NULL if node is none-existent
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ab;

	ab = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	for (ab = 0; ab < index; ab++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
