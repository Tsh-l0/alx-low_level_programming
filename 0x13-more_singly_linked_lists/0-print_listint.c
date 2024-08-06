#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 *
 * @h: Pointer to head of list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_counter = 0;

	/* Loops through the list as long as the list is not empty */
	while (h != NULL)
	{
		/* Prints the value stored in the node */
		printf("%d\n", h->n);

		/* Counts the nodes that have been printed */
		n_counter++;
		h = h->next;
	}

	return (n_counter);
}
