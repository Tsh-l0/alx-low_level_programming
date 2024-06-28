#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9 excl. 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			c = i + '0';
			_putchar(c);
		}

	}
	_putchar('\n');
}
