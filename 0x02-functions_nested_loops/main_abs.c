#include "main.h"

/**
 * _putchar - writes to stdout
 * @c: The character to print
 *
 * Return: On succes, 1. -1 on error
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_number - Prints an integer to stdout
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * main - Entry point 
 *
 * Return: Always 0
 */
int main(void)
{
	int number = -5;
	int result;

	result = _abs(number);

	char msg1[] = "The absolute value of ";
	char msg2[] = " is ";
	char newline = '\n';

	int i;

	for (i = 0; msg[i] != '\0'; i++)
		_putchar(msg1[i]);

	print_number(number);

	for (i = 0; msg2[i] != '\0'; i++)
		_putchar(msg2[i]);

	print_number(result);

	_putchar(newline);

	return (0);
}
