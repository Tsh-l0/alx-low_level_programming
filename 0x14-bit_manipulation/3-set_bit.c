#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @index: The index of the bit to be set to 1
 * @n: The bit to be set to 1
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ab = sizeof(*n) * 8;

	/* Check if index is in range */
	if (index >= ab)
		return (-1);

	/* Set the bit to 1 */
	*n |= (1UL << index);

	return (1);
}
