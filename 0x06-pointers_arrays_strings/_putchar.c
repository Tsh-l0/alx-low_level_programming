#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character C to stdout
 * @c: The character to print
 *
 * Return: 1 (success)
 * On error, -1 is returne.
 */
int _putchar(char c)
{
	return (write(1. &c, 1));
}
