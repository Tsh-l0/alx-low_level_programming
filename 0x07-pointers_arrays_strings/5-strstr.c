#include "main.h"
#include <stdio.h>

/**
 * _strstr - Finds the first occurance of a sustring
 * within another string
 *
 * @needle: The value to be found
 * @haystack: The string to be searched
 *
 * Return: Pointer to the beginning of the substring
 * or Null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
