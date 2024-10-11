#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key and can't be an empty string
 * @value: Value assosciated with the key. Value can't be empty
 * string. Value must be duplicated
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_cpy;
	unsigned long int ind, ab;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	for (ab = ind; ht->array[ab]; ab++)
	{
		if (strcmp(ht->array[ab]->key, key) == 0)
		{
			free(ht->array[ab]->value);
			ht->array[ab]->value = value_cpy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_cpy;
	new->next = ht->array[ind];
	ht->array[ind] = new;

	return (1);
}
