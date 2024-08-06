#include "lists.h"

/**
 * delete_nodeint_at_index - 
 *
 * @head: Double header pointing to the head node
 * @index: The index of the node to be deleted
 *
 * Return: 1 on success, -1 at failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p_holder = *head;
	listint_t *dlt_node;
	unsigned int ab;
	
	/* Check if listint_t is empty */
	if (head == NULL || *head == NULL)
		return (-1);

	/* Case for deleting head node */
	if (index == 0)
	{
		/* Move head to the next node */
		*head = p_holder->next;
		/* Free memory of the old head */
		free(p_holder);
		return (1);
	}
	
	/* Transverse to the node before the one to delete */
	for (ab = 0; p_holder != NULL && ab < index - 1; ab++)
	{
		p_holder = p_holder->next;
	}

	/* Check if index is out of bounds */
	if (p_holder == NULL || p_holder->next == NULL)
		return (-1);

	/* Node to delete */
	dlt_node = p_holder->next;
	/* Skip over the node to delete */
	p_holder->next = dlt_node->next;
	/* Free memory of the node to delete */
	free(dlt_node);

	return (1);
}
