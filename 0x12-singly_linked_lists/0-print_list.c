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
	size_t count_nodes = 1;

	/* Return 0 if the list is empty */
	if (h == NULL)
		return (0);

	/* Move through/traverse the list until the last node */
	while (h->next != NULL)
	{
		if (h->next == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		/* Move onto the following node */
		h = h->next;
		/* Increase node count */
		count_nodes++;
	}
	/* Print the final node */
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	return (count_nodes);
}
