#include "hash_tables.h"

/**
 * hash_djb2 - A function that implements the djb2 algorithm
 *
 * @str: The string used in the algorithm
 *
 * Return: The hash value of the algorithm
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
