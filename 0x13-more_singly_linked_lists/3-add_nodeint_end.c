#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: Double pointer to the head of listint_t list
 * @n: New node to be added to the end of the list
 *
 * Return: The address of the new node, NULL at failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_endnode;
	listint_t *holder = *head;

	/* Allocate memory for the new node */
	new_endnode = malloc(sizeof(listint_t));
	/* Checks if the memory allocation was successful */
	if (new_endnode == NULL)
		return (NULL);

	/* Sets value for new_endnode and sets the next value to null */
	new_endnode->n = n;
	new_endnode->next = NULL;

	/* If the list is empty, the new node is set as the head */
	if (*head == NULL)
	{
		*head = new_endnode;
		return (new_endnode);
	}

	/* Adds the new node to the end of the list */
	while (holder->next)
		holder = holder->next;

	holder->next = new_endnode;

	return (new_endnode);
}
