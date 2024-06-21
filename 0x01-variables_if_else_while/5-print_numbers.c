#include <stdio.h> /* Enable the printf function */

/**
 * main - prints all the single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0; /* Initialize digit to 0 */

	/* Loop until digit is <= 9 */
	while (digit <= 9)
	{
		/* Check if digit < 9 */
		if (digit < 9)
		{
			printf("%d", digit); /* Print digit */
		}

		digit++; /* Increase digit to next number */
	}

	return (0);
}
