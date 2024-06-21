#include <stdio.h> /* Enable putchar function */

/**
 * main - prints all the single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success_
 */

int main(void)
{
	int digit = 48; /* ASCII value 0 */

	while (digit <= 57) /* ASCII value 9 */
	{
		putchar(digit); /* Print digit as a character */

		digit++; /* Move onto the next digit */
	}

	putchar('\n'); /* Print a new line */

	return (0);
}
