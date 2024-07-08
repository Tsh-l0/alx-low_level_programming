#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: The pointer to be assigned
 * @to: The char the pointer will be assigned to
 *
 * Return: 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
