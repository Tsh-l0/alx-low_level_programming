#include "function_pointers.h"

/**
 * int_index - Searches for an integer using cmp
 *
 * @array: The array that hosts the integers
 * @size: The size of the integer array
 * @cmp: The pointer to the function
 *
 * Return: The index of the first element for which cmp does not
 * return 0, or -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (1);
	}

	return (-1);
}
