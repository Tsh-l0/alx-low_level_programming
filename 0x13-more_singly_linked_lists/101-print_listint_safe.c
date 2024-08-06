#include "lists.h"

/**
 * print_listint_safe - Returns the number of nodes in a list
 *
 * @head: Pointer to the head of listint_t
 *
 * Return: Number of nodes in the list, 98 at failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c_nodes = 0;
	const listint_t *curr_node = head;
	const listint_t **nodes_viewed = NULL;
	size_t ab;

	while (curr_node != NULL)
	{
		for (ab = 0; ab < c_nodes; ab++)
		{
			if (curr_node == nodes_viewed[ab])
			{
				printf("-> [%p] %d\n", (void *)curr_node, curr_node->n);
				exit(98);
			}
		}

		c_nodes++;
		nodes_viewed = realloc(nodes_viewed, c_nodes * sizeof(listint_t *));
		if (nodes_viewed == NULL)
		{
			free(nodes_viewed);
			exit(98);
		}
		nodes_viewed[c_nodes - 1] = curr_node;
		printf("[%p] %d\n", (void *)curr_node, curr_node->n);
		curr_node = curr_node->next;
	}

	free(nodes_viewed);
	return(c_nodes);
}
