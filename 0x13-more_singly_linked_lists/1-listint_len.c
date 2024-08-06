#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked
 * listint_t list.
 *
 * @h: Pointer to the head node in the linked listint_t list
 *
 * Return: The number of elements in linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t n_counter = 0;

	while (h != NULL)
	{
		n_counter++;
		h = h->next;
	}

	return (n_counter);
}
