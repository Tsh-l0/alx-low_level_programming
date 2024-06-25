#include "main.h"

/**
 * main - Programme entry point
 *
 * Description: Prints "_putchar" followed by new line
 *
 * Return: 0 if successful
 */
int main(void)
{
	char str[] = "_putchar"; /* Defines the string to be printed */
	int i;

	/* Loop through each characted in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]); /* Print every character from _putchar */
	}
		_putchar('\n');

		return (0);
}
