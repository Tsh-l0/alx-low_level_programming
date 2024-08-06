#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *
 * @head: Double pointer to the head of listint_t linked list
 *
 * Return: The head node's data, 0 if linkedint_t list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *p_holder;
	int ab;

	if (head == NULL || *head == NULL)
		return (0);

	/* Saves the current head node in p_holder */
	p_holder = *head;
	/* Get the data of the head node */
	ab = p_holder->n;
	/* Move the head pointer to the next node */
	*head = (*head)->next;
	free(p_holder);

	return (ab);
}
