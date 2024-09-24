#include "main.h"
#include <string.h>

/**
 * _memcpy - Copies memory area
 *
 * @dest: Where memory will be copied to
 * @src: Where we will be copying from
 * @n: Number of bytes to copy
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
