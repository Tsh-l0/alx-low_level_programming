#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array.
 *
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: The pointer to be used for the program
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int arr;

	if (array == NULL || action == NULL)
		return;

	for (arr = 0; arr < size; arr++)
		action(array[arr]);
}

