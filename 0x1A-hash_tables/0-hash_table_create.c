#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 *
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int ab;

	/* Allocates memory for the hash table */
	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
	{
		return (NULL);
	}

	for (ab = 0; ab < size; ab++)
		hash_t->array[ab] = NULL;

	return (hash_t);
}
