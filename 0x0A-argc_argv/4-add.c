#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - Verifies if a string is only digits
 * @num: The string to verify
 *
 * Return: 0 if str is only digits, 1 on failure
 */
int isNum(char num[])
{
	int count, str_len = strlen(num);

	for (count = 0; count < str_len; count++)
	{
		if (!isdigit(num[count]))
			return (1);
	}

	return (0);
}

/**
 * main - Program adds positive numbers from the command line
 *
 * @argc: The number of arguments in the command line
 * @argv: The array value of command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count, result;

	if (argc == 1)
	{
		printf("0\n");
	}

	else
	{
		result = 0;
		for (count = 1; count < argc; count++)
		{
			if (isNum(argv[count]) == 0)
			{
				result += atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
