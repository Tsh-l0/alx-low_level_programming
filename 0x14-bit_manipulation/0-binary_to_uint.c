#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: Points to 0 for strins and 1 for chars
 *
 * Return: Converted number. 0 if string is not 1 or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_unsints = 0;
	int ints_len = 0;

	if (b == NULL)
		return (0);

	while (b[ints_len] != '\0')
	{
		if (b[ints_len] != '0' && b[ints_len] != '1')
			return (0);

		conv_unsints = (conv_unsints << 1) | (b[ints_len] - '0');
		ints_len++;
	}

	return (conv_unsints);
}
