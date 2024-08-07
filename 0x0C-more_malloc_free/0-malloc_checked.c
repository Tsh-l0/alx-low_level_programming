#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: The variable where memory will be allocated
 *
 * Return: Pointer to the allocated memory,
 * 98 status value on failure
 */
void *malloc_checked(unsigned int b)
{
	void *pntrr;

	pntrr = malloc(b);

	if (pntrr == NULL)
		exit(98);
	return (pntrr);
}
