#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 *
 * @index: The bit to be found, starting at 0
 * @n: The number to find
 *
 * Return: The value of a bit at index, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_atidx = sizeof(n) * 8;

	/* Check if index is in range */
	if (index >= bit_atidx)
		return (-1);

	/* Get the bit value at index */
	return ((n >> index) & 1);
}
