#include "lists.h"

/**
 * get_nodeint_at_index - Returns the value of a node at index
 *
 * @head: Pointer to the head node of listint_t list
 * @index: Index of the node, begins at 0
 *
 * Return: Return pointer at index, NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int curr_ind;

	for (curr_ind = 0; curr_ind < index; curr_ind++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
