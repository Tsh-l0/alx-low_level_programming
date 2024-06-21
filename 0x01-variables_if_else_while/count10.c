#include <stdio.h>

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		if (digit < 9)
		{
			printf("%d", digit);
		}
		else
		{
			printf("%d\n", digit);
		}

		digit++;
	}

	return (0);
}
