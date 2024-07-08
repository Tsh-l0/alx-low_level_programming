#include "main.h"

/**
 * _memcpy - Copy memory from one location to another
 *
 * @n: byte to be copied
 * @src: memory to be copied
 * @dest: new destination for memory
 *
 * Return: 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
