#include "main.h"

/**
 * print_chessboard - Prototype to print the chessboard
 *
 * @a: TThe array we will be printing from
 *
 * Return: 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[j][k]);
		_putchar('\n');
	}
}
