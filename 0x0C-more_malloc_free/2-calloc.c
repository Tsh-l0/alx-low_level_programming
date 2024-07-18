#include "main.h"
#include <stdlib.h>

/**
 * _memset - Fills first n bytes of memeory are pointed by s
 * with constant byte b
 *
 * @s: Pointer to memory area to be filled
 * @b: Byte value to be set
 * @n: Number of bytes to set to b
 *
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: The amount of elements in an array
 * @size: The byte size of each element
 *
 * Return: A pointer to allocated memory, NULL if allocation fails
 * NULL if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pntrr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pntrr = malloc(size * nmemb);

	if (pntrr == NULL)
		return (NULL);

	_memset(pntrr, 0, nmemb * size);

	return (pntrr);
}
