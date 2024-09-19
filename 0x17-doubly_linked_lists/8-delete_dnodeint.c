#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a
 * doubly linked list
 *
 * @head: Double pointer to the head node of the doubly linked list
 * @index: The index of the node to be deleted
 *
 * Return: 1 on success, -1 at failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_nde;
	unsigned int ab;

	if (head == NULL || *head == NULL)
		return (-1);

	curr_nde = *head;
	if (index == 0)
	{
		*head = curr_nde->next;
		if (curr_nde->next != NULL)
		{
			curr_nde->next->prev = NULL;
		}
		free (curr_nde);
		return (1);
	}
	for (ab = 0; ab < index; ab++)
	{
		if (curr_nde->next == NULL)
			return (-1);
		curr_nde = curr_nde->next;
	}
	curr_nde->prev->next = curr_nde->next;
	if (curr_nde->next != NULL)
		curr_nde->next->prev = curr_nde->prev;
	free(curr_nde);
	return (1);
}
