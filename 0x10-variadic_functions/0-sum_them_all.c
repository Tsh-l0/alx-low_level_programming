#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Adds its own paramters and returns a sum
 *
 * @n: The number of paramters given to the program
 *
 * Return: Sum of all given parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_points;
	unsigned int ap;
	int sum_points = 0;

	if (n == 0)
		return (0);

	va_start(arg_points, n);

	for (ap = 0; ap < n; ap++)
		sum_points += va_arg(arg_points, int);

	va_end(arg_points);

	return (sum_points);
}
