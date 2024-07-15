#include "main.h"
#include <string.h>

/**
 * _memset - Sets the first n bytes of the memory pointed to by s to b
 *
 * @s: Pointer to the memory to be filled
 * @b: The value to be set
 * @n: Number of bytes to the value
 *
 * Return: A pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
