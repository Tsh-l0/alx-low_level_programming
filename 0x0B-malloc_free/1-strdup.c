#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to newly allocated memory space that,
 * contains a copy of the given string
 *
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicate string,
 * NULL if insufficient memory or str is NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	dup_str = malloc((length + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup_str[i] = str[i];
	dup_str[length] = '\0';

	return (dup_str);
}
