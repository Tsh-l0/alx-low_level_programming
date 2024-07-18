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
	int int_arry;

	if (min > max)
	{
		return (NULL);
	}

	pntrr = malloc(sizeof(int) * (max - min));

	if (pntrr == NULL)
	{
		return (NULL);
	}

	int_arry = 0;

	while (min <= max)
	{
		pntrr[int_arry] = min;
		min++;
		int_arry++;
	}

	return (pntrr);
}
