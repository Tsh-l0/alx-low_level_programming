#include "main.h"

/**
 * _islower - Check if a character is lowercase
 * @c: The character being assessed
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int main(void)
{
	char test_char = 'z'; /* Test character */
	int result;

	result = _islower(test_char);

	if (result == 1)
	{
		return 1; /* If the test character is lowercase */
	}
	else
	{
		return 0;
	}
}
