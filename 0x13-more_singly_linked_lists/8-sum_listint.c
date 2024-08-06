#include "lists.h"

/**
 * sum_listint - Returns the sum all the data (n) of a listint_t
 * linked list
 *
 * @head: Pointer to the head node of listint_t
 *
 * Return: The sum of all the data (n) of a listint_t linked list.
 * 0 if listint_t is empty
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head != NULL)
	{
		/* add the data of the node to sum_data */
		sum_data += head->n;
		/* Transverse to the next node */
		head = head->next;
	}

	return (sum_data);
}
