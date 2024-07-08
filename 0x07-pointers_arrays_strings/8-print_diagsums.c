#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 * of integers
 *
 * @a: input
 * @size: input
 *
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int j, k, suma = 0, sumb = 0;

	for (j = 0; j <= (size * size); j = j + size + 1)
		suma = suma + a[j];

	for (k = size - 1; k <= (size * size) - size; k = k + size - 1)
		sumb = sumb + a[k];
	printf("%d, %d\n", suma, sumb);
}
