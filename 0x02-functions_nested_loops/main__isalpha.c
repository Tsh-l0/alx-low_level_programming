#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Test the _isalpha function
 *
 * Return: 1 if the test character is a letter, 0 otherwise
 */
int main(void)
{
	char test_char = 'h';
	int result;

	result = _isalpha(test_char);

	return result;
}
