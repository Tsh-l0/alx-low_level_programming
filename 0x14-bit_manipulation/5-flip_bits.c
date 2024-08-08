#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 *
 * @n: First num
 * @m: Second num
 *
 * Return: Number of bits that have been flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ab;
	int bit_count;

	ab = n ^ m;
	bit_count = 0;

	while (ab)
	{
		bit_count++;
		ab &= (ab - 1);
	}
	return (bit_count);
}
