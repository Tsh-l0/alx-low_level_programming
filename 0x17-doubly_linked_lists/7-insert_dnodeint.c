#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: Double pointer to the head node of the doubly linked list
 * @idx: Index where the new node should be added. starts at 0
 * @n: The new node to be added into the doubly linked list
 *
 * Return: Address of the new node. NULL at failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nde, *nxt_nde, *curr_nde;
	unsigned int ab;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		curr_nde = *h;
		for (ab = 0; ab < idx - 1 && curr_nde != NULL; ab++)
			curr_nde = curr_nde->next;
		if (curr_nde == NULL)
			return (NULL);
	}

	new_nde = malloc(sizeof(dlistint_t));
	if (new_nde == NULL)
		return (NULL);

	new_nde->n = n;
	if (idx == 0)
	{
		nxt_nde = *h;
		*h = new_nde;
		new_nde->prev = NULL;
	}
	else
	{
		new_nde->prev = curr_nde;
		nxt_nde = curr_nde->next;
		curr_nde->next = new_nde;
	}
	new_nde->next = nxt_nde;
	if (new_nde->next != NULL)
		new_nde->next->prev = new_nde;
	return (new_nde);
}
