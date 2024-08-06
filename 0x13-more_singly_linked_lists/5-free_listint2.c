#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 *
 * @head: Double pointer to the head of listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *p_holder;

	/* NULL Check. If NULL, returns immediately */
	if (head == NULL)
		return;

	while (*head)
	{
		/* Assign a temporary holder to 'next' */
		p_holder = (*head)->next;
		/* Memory occupied by head is freed */
		free(*head);
		/* head is updated to the next node so loop continues*/
		*head = p_holder;
	}
}
