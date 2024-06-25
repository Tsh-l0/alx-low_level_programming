#include "main.h"

/**
 * main - Entry point
 *
 * Description: Check if c is lowercase
 *
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
