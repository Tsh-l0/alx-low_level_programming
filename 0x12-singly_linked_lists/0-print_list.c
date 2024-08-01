#include "lists.h"

/**
 * print_list - A function that prints all the elements of list_t
 *
 * @h: A pointer to the head node
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	/* Move through/traverse the list until the last node */
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		/* Move onto the following node */
		h = h->next;
		/* Increase node count */
		count_nodes++;
	}

	return (count_nodes);
}
