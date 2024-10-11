#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 *
 * @hash_table_delete: The hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int ab;

	for (ab = 0; ab < ht->size; ab++)
	{
		if (ht->array[ab] != NULL)
		{

			node = ht->array[ab];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
