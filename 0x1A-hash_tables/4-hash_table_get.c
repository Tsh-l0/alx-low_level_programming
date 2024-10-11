#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated
 * with a key
 *
 * @ht: Hash table to be found
 * @key: Key to be found
 *
 * Return: The value associated with the element.
 * NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp_node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);

	tmp_node = ht->array[ind];
	while (tmp_node && strcmp(tmp_node->key, key) != 0)
		tmp_node = tmp_node->next;

	return ((tmp_node == NULL) ? NULL : tmp_node->value);
}
