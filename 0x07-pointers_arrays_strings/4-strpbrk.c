#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Locates the first occurance in a string
 *
 * @s: The value where the pointer will be returned
 * @accept: Where the value will be found
 *
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int l, m;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[l] == accept[m])
				return (s + l);
		}
	}

	return (NULL);
}
