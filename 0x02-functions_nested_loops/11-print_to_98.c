#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all integers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		/* Print 98 without */
		printf("%d\n", 98);
	}

	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", 98);
	}
}
