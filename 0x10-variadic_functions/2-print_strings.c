#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 *
 * Return: 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int num;
	va_list arg_points;

	va_start(arg_points, n);

	for (num = 0; num < n; num++)
	{
		str = va_arg(arg_points, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (separator != NULL && num < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg_points);
}
