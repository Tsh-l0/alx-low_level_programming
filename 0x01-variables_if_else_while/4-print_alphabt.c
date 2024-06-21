#include <stdio.h> /* Enables the putchar function to print */

/**
 * main - prints the alphabet except 'q' and 'e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch ='a'; /* Initialize ch with 'a' */

	/* Loop until 'z' is reached */
	while (ch <= 'z')
	{
		/* Check if ch != 'q' and 'e' */
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch); /* Print everything except 'q' and 'e'*/
		}

		ch++; /* Move to the next letter */
	}

	putchar('\n'); /*Print a new line*/

	return (0);
}
