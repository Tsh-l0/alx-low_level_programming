#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 *
 * @dest: The destination where the concatenated string will reside
 * @src: The string to be concatenated
 *
 * Return: A pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
