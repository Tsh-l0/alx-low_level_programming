#include "main.h"

/**
 * _strspn - Return a number of bytes
 *
 * @s: The number of bytes to be found
 * @accept: Where s resides
 *
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}

		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
