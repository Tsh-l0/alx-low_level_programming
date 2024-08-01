#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: A double pointer to the first(head) node in the list
 * @str: String to be duplicated and added to the first(head) node
 *
 * Return: Address of the new element, or NULL at failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *hnode_new;
	unsigned int len = 0;

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for node */
	hnode_new = malloc(sizeof(list_t));
	if (!hnode_new)
		return (NULL);

	/* Duplicate the string */
	hnode_new->str = strdup(str);
	hnode_new->len = len;
	hnode_new->next = (*head);

	/* Point head to the new node */
	(*head) = hnode_new;

	return (*head);
}
