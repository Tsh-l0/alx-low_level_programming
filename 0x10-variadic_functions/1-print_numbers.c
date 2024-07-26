#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers and a new line
 *
 * @n: The number of integers passed
 * @seperator: The string to be printed between the numbers
 * 
 * Return: 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	va_list arg_points;

	va_start(arg_points, n);

	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(arg_points, int));
		if (separator != NULL && num < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg_points);
}
