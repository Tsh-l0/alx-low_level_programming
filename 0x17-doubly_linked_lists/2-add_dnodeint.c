#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of the doubly linked list
 *
 * @head: Double pointer to the head of the doubly linked list
 * @n: The node to be added to the doubly linked list
 *
 * Return: Address of the new element or NULL at failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_nde;

	/* Allocate memory */
	n_nde = malloc(sizeof(dlistint_t));

	/* Deal with null node */
	if (n_nde == NULL)
		return (NULL);

	n_nde->n = n;

	n_nde->next = *head;
	n_nde->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = n_nde;

	(*head) = n_nde;

	return (n_nde);
}
