#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: A double pointer to the head of the list
 * @n: New node to be added to the head of the list
 *
 * Return: A pointer to the head of the node, NULL at failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = n;
	node_new->next = *head;
	*head = node_new;

	return (node_new);
}
