#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: The bit to be cleared
 * @index: Index of the bit to clear
 *
 * Return: 1 on Success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear_bit = sizeof(*n) * 8;

	/* Check if index is in range */
	if (index >= clear_bit)
		return (-1);

	/* Clear the bit at index */
	*n &= ~(1UL << index);

	return (1);
}
