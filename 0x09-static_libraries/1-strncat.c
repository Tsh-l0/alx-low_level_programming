#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates up to n charactes from src to dest
 *
 * @dest: Where the string will be concatenated
 * @src: The string to be concatenated from
 * @n: The maximum number of strings to be concatenated
 *
 * Return: A pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
