#include "main.h"
#include <stdio.h>

/**
 * main - Program prints all arguments received
 *
 * @argc: The count of arguments
 * @argv: The array value of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg_val;

	for (arg_val = 0; arg_val < argc; arg_val++)
		printf("%s\n", argv[arg_val]);

	return (0);
}
