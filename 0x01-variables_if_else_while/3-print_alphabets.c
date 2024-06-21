#include <stdio.h> /* Use the stdio.h for putchar*/

/**
 * main - prints the alphabet in lowercase then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* This loops through the lowercase alphabet */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch); /* Prints the lowercase alphabet */
	}
	/* This loops through the uppercase alphabet */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch); /* Prints the uppercase alphabet */
	}
	putchar('\n'); /* Prints a new line */

	return (0);
}
