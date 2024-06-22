#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the different combination of two 1-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
