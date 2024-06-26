#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the n elements of an array of int
 *
 * @a: Array of int
 * @n: Number of elements to be printed from the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
