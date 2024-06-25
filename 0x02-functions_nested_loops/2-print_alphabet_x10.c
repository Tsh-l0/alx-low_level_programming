#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times followed by a new line
 *
 * Description: Using _putchar twice, print the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 10; j++) /* Print the alphabet x10 */
	{
		for ( i = 0; i < 26; i++) /* Print the alphabet */
		{
			_putchar(alphabet[i]);
		}
		_putchar('\n');
	}
}
