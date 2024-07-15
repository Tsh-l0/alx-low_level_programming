#include "main.h"
#include <string.h>

/**
 * _strspn - Finds the length of a prefix substring
 *
 * @s: The string to be scanned
 * @accept: The string containing matching characters
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
