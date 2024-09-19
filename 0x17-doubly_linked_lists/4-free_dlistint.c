#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: A pointer to the head node of the doubly linked list
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_nde;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp_nde = head) != NULL)
	{
		head = head->next;
		free(tmp_nde);
	}
}
