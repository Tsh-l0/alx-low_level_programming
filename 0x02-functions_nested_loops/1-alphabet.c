#include "main.h"

/**
 * Description: Prints the alphabet in lowercase and ends on a new line
 *
 * Return: 0 Success
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmopqrstuvwxyz\n";
	int i;

	/* Print each character in the alphabet array */
	for (i = 0; alphabet[i] != '\0'; i++)
	{
		_putchar(alphabet[i]);
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
