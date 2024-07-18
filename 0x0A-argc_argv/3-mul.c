#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers passed in the command line
 *
 * @argc: The count of arguments passed in the command line
 * @argv: The array value of the arguments passed in command line
 *
 * Return: 0 (Success), 1 on failure
 */
int main(int argc, char *argv[])
{
	int multiple_arg;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	else
	{
		multiple_arg = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiple_arg);
	}

	return (0);
}
