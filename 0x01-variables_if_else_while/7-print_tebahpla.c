#include <stdio.h> /* Enable putchar function */

/**
 * main - Print the lowercase alphabet backwards and a new line
 * Return : Always 0 (Success)
 */
int main(void)
{
	int letter = 122; /* ASCII value of 'z' */

	while (letter >= 97) /* ASCII value of 'a' */
	{
		putchar(letter); /* print the letter of the alphabet */

		letter--; /* Move from the letter highest in order to the one lowest in order */
	}

	putchar('\n'); /*Print new line */

	return (0);
}
