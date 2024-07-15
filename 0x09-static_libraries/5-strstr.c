#include "main.h"
#include <string.h>

/**
 * _strstr - Finds the first occurance of needle in haystack
 *
 * @haystack: The string to be examined
 * @needle: The substring to be searched in haystack
 *
 * Return: A pointer to the first character found in needle,
 * NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
