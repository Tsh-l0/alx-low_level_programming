#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: The smallest value in the array
 * @max: The largest value in the array
 *
 * Return: A pointer to the array, NULL if min > max or
 * malloc fails
 */
int *array_range(int min, int max)
{
	int *pntrr;
	int int_arry, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	pntrr = malloc(sizeof(int) * size);

	if (pntrr == NULL)
	{
		return (NULL);
	}

	for (int_arry = 0; min <= max; int_arry++, min++)
	{
		pntrr[int_arry] = min;
	}

	return (pntrr);
}
