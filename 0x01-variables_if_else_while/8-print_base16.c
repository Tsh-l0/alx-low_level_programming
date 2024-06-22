#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 * Only uses the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 16)
	{
		if (num < 10)
			putchar(num + '0');
		else
			putchar(num - 10 + 'a');
		num++;
	}

	putchar('\n');

	return (0);
}
