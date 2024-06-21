#include <stdio.h>

int main(void)
{
	int letter = 122;

	while (letter >= 97)
	{
		putchar(letter);

		letter--;
	}

	putchar('\n');

	return (0);
}
