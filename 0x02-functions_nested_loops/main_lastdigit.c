#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int number = 1234;
    int last_digit;

    last_digit = print_last_digit(number);

    char msg1[] = "The last digit of ";
    char msg2[] = " is ";
    char newline = '\n';

    int i;

    for (i = 0; msg1[i] != '\0'; i++)
        _putchar(msg1[i]);

    if (number < 0)
        _putchar('-');

    print_last_digit(number);

    for (i = 0; msg2[i] != '\0'; i++)
        _putchar(msg2[i]);

    _putchar(last_digit + '0');

    _putchar(newline);

    return (0);
}

