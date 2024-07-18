#include <stdio.h>
#include "main.h"

/**
 * main - Program to print the executable file name even
 * when changed
 *
 * @argc: Number of command line arguments
 * @argv: Pointer to argc
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0) /* argc is always above 1 (filename) */
	{
		printf("%s\n", argv[0]); /* Print the file name */
	}

	return (0);
}
