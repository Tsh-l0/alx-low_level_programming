#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 *
 * @head: Pointer to the head of listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *p_holder;

	while (head != NULL)
	{
		p_holder = head;
		head = head->next;
		free(p_holder);
	}
}
