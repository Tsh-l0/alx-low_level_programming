#include "main.h"

/** 
 * main - Entry point
 *
 * Description: Check if c is lowercase
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z') ? 1: 0;
}
