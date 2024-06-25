#include "main.h"

/**
 * main - Entry point
 *
 * Description: Tests print_sign function with an example number and prints the corresponding sign
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int num = 10;
	int result = print_sign(num);

	witch (result)
	{
		case 1:
			putchar('+');
			break;
		case 0:
			putchar('0');
			break;
		case -1:
			putchar('-');
			break;
		default:
			break;
	}

	putchar('\n');

	return (0);
}
