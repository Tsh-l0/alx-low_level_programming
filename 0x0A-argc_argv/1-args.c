#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number passed to the command line
 *
 * @argc: The count of the command line arguments
 * @argv: The array value of the command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
