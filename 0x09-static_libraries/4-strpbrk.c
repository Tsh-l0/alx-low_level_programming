#include "main.h"
#include <string.h>

/**
 * _strpbrk - Finds the first character that in s matches any character
 * in accept
 *
 * @s: The string to be scanned
 * @accept: The string containing the characters to be matched
 *
 * Return: A pointer to the character that has been matched in accept,
 * NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
