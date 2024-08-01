#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a
 * linked list_t list.
 *
 * @h: A pointer to the first (head) node
 *
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t c_nodes = 0;

	/* Move through/traverse the list and count */
	while (h)
	{
		c_nodes++;
		h = h->next;
	}

	return (c_nodes);
}
