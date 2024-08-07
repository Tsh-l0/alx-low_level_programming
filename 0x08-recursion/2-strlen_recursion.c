#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: The string we will be returning the length of
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
