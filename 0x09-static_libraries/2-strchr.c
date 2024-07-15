#include "main.h"
#include <string.h>

/**
 * _strchr - Finds a character in a string
 *
 * @s: The string to be found
 * @c: The character to locate
 *
 * Return: A pointer to the first occurance of c in s,
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
