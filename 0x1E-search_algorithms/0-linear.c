#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: Pointer to the first element of the array to be searched
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if array
 * is NULL or value is not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t aa;

	if (array == NULL)
		return (-1);

	for (aa = 0; aa < size; aa++)
	{
		printf("Value checked array[%lu] = [%d]\n", aa, array[aa]);
		if (array[aa] == value)
			return (aa);
	}
	return (-1);
}
