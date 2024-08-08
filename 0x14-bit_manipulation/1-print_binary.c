#include "main.h"

/**
 * print_binary - Prints the binary form of a number
 *
 * @n: The number to print in binary form
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit_mask = 1UL << (sizeof(n) * 8 - 1);
	int track_bits = 0;

	/* When n = 0 */
	if (n == 0)
	{
		putchar('0');
		return;
	}

	/* Skip leading 0s */
	while (bit_mask > n)
		bit_mask >>= 1;

	/* Print each bit */
	while (bit_mask > 0)
	{
		if (n & bit_mask)
		{
			putchar('1');
			track_bits = 1;
		}
		else if (track_bits)
		{
			putchar('0');
		}

		bit_mask >>= 1;
	}
}
