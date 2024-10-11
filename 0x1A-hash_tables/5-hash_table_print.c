#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 *
 * @ht: The hash table
 *
 * Return: The key/value in the order that they appear in the array of
 * hash table
 * Nothing if ht == NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp_node;
	unsigned long int ab;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (ab = 0; ab < ht->size; ab++)
	{
		if (ht->array[ab] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			tmp_node = ht->array[ab];
			while (tmp_node != NULL)
			{
				printf("'%s': '%s'", tmp_node->key, tmp_node->value);
				tmp_node = tmp_node->next;
				if (tmp_node != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
