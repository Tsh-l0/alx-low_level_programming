#include "main.h"

/**
 * _strchr - Returns the first occurance
 * of a letter in a string
 *
 * @c: The character to be found
 * @s: The string to be searched
 *
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
