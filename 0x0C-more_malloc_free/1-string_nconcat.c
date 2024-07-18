#include "main.h"
#include <stdlib.h>

/**
 * string_noncat - Concatenates two strings 
 *
 * @s1: The first char
 * @s2: The second char
 * @n: unsigned int
 *
 * Return: NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str_len1 = 0, str_len2 = 0, a, b;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Find the length of s1 + s2 */
	while (s1[str_len1] != '\0')
		str_len1++;
	while (s2[str_len2] != '\0')
		str_len2++;

	/* Allocate memory for concat string */
	if (n >= str_len2)
		concat_str = (char *)malloc(sizeof(char) * (str_len1 + str_len2 + 1));
	else
		concat_str = (char *)malloc(sizeof(char) * (str_len1 + n + 1));

	/** Check if memory allocation was successful */
	if (concat_str == NULL)
		return (NULL);

	/** Copy s1 into concat_str */
	for (a = 0; s1[a]; a++)
		concat_str[a] = s1[a];

	for (b = 0; s2[b] && b < n; b++)
		concat_str[a + b] = s2[b];

	/* NULL terminate concat_str */
	concat_str[a + b] = '\0';

	return (concat_str);
}
