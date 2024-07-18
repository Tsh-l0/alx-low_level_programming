#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: The variable where memory will be allocated
 *
 * Return: 98on malloc_checked failure
 */
void *malloc_checked(unsigned int b)
{
	void *pntrr = malloc(b);

	if (pntrr == NULL)
	{
		exit(98);
	}

	return (pntrr);
}
