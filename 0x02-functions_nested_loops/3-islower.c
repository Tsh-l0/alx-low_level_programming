#include "main.h"

/**
 * _islower - function to check if
 *           character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is lowercase
 *         otherwise always 0 (Success)
*/
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
