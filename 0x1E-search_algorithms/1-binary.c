#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to be searched
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if array is NULL
 * or value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;
	size_t aa;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (aa = left; aa <= right; aa++)
		{
			printf("%d", array[aa]);
			if (aa < right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
