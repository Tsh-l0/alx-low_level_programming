#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a doubly linked list
 *
 * @head: Double pointer to the head node
 * @n: The new node to be added at the end of the list
 *
 * Return: The address of the new element or NULL at failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nde, *last_nde;

	new_nde = malloc(sizeof(dlistint_t));
	if (new_nde == NULL)
		return (NULL);

	new_nde->n = n;
	new_nde->next = NULL;

	last_nde = *head;

	if (*head == NULL)
	{
		new_nde->prev = NULL;
		*head = new_nde;
	}
	else
	{
		while (last_nde->next)
			last_nde = last_nde->next;
		last_nde->next = new_nde;
	}
	new_nde->prev = last_nde;
	return (new_nde);
}
