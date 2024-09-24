#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies up to n characters from src to dest
 *
 * @dest: Where the string will be copied to
 * @src: Where the string will be copied to
 * @n: The maximum number of characters to be copied
 *
 * Return: A pointer to the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
