#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 *
 * *h: Pointer to head of list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_counter = 0;

	/* Prints the value of a node */
	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		n_counter++;
	}

	return (n_counter);
}
