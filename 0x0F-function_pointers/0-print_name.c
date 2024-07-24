#include "function_pointers.h"

/**
 * print_name - A function to print a name
 *
 * @name: The name to be printed by the program
 * @f: The function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
