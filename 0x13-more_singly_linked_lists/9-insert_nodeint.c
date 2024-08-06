#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new new node at idx
 *
 * @head: Double pointer to the head node of listint_t
 * @idx: The position where the new node will be added
 * @n: Value of the node to be added
 *
 * Return: Address of the new node, NULL ar failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_new;
	listint_t *curr_node;
	unsigned int ab;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		node_new = malloc(sizeof(listint_t));
		if (node_new == NULL)
			return (NULL);

		node_new->n = n;
		node_new->next = *head;
		*head = node_new;
		return (node_new);
	}

	curr_node = *head;
	for (ab = 0; ab < idx - 1; ab++)
	{
		if (curr_node == NULL)
			return (NULL);
		curr_node = curr_node->next;
	}

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);
	node_new->n = n;
	node_new->next = curr_node->next;
	curr_node->next = node_new;

	return (node_new);
}
