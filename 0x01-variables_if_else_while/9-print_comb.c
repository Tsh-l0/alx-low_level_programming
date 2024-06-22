#include <stdio.h> /* Initialize putchar function */

/**
 * main - Entry point
 *
 * Description Prints all possible combination of 1-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}

	putchar('\n');

	return (0);
}
