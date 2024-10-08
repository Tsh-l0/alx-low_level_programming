#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 *
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in dlistint_t list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
