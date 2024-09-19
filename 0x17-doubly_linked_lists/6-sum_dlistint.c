#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data in a doubly linked
 * list
 *
 * @head: Pointer to the head node of the doubly linked list
 *
 * Return: The sum of all the data in the doubly linked list
 * 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_list = 0;

	while (head != NULL)
	{
		sum_list += head->n;
		head = head->next;
	}
	return (sum_list);
}
