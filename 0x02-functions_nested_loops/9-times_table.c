#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = column * row;
			if (column == 0)
			{
				_putchar(result + '0');
			}

			if (result < 10 && column != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
