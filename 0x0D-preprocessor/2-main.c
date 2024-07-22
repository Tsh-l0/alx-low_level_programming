#include <stdio.h>

/**
 * main - Function to be executed
 *
 * Description: Prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: Name of file
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
