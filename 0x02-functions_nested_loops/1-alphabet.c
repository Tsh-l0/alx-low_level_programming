#include <unistd.h>
#include "0-putchar.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to be printe
 *
 * This function writes the charater 'c' to the standard output. It is used to print a single character
 *
 * Return:
 * On success, 1 is returned
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
