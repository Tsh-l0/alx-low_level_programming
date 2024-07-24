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
	int ind = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; ind < size; ind++)
	{
		if (cmp(array[ind]) != 0)
			return (ind);
	}

	return (-1);
}
