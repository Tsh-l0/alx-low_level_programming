#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the square of a number
 *
 * @n: The number whose square is to be found
 *
 * Return: Square of n (Success)
 * -1 (Fail)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates the square of a number
 *
 * @n: The number whose square to be calculated
 * @i: Iterations
 *
 * Return: The resulting square
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
