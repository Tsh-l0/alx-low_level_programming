#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @str: The string to be duplicated
 * @head: double pointer to the list_t list
 * Return: Address of the new element, or NULL at failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nd;
	list_t *temp = *head;
	unsigned int len = 0;

	/* Calculate the string length */
	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new_nd = malloc(sizeof(list_t));
	if (!new_nd)
		return (NULL);

	/* Initialize the new node */
	new_nd->str = strdup(str);
	new_nd->len = len;
	new_nd->next = NULL;

	/* If the list is empty, set the new node as head */
	if (*head == NULL)
	{
		*head = new_nd;
		return (new_nd);
	}
	/* Mve to the end of the list */
	while (temp->next)
		temp = temp->next;

	temp->next = new_nd;
	return (new_nd);
}
