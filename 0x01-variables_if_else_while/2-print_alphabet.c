#include <stdio.h> /* Include the stdio.h header for the putchar function */

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch;

        /* Loop through the alphabet from 'a' to 'z' */
        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);/*Prints each character*/
        }
        putchar('\n');/*Print a new line*/

        return (0);
}
