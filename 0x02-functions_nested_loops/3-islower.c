#include "main.h"

/**
 * _islower: - function to check if character is lowercase
 *
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
