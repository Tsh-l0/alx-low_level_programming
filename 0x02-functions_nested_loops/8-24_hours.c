#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute <= 60; minute ++)
		{
			int hour_first_digit = hour / 10;
			int hour_second_digit = hour %10;
			int minute_first_digit = minute / 10;
			int minute_second_digit = minute % 10;

			_putchar(hour_first_digit + '0');
			_putchar(hour_second_digit + '0');
			_putchar(':');
			_putchar(minute_first_digit + '0');
			_putchar(minute_second_digit + '0');
			_putchar('\n');
		}
	}
}
