#include "main.h"
/**
 *jack_bauer - func
 *
 * description - prnt every mintue
 *
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int hours;
	int minutes;
	char hour_char1, hour_char2, minute_char1, minute_char2;
	for (hours=0; hours < 24; hours++)
	{
		for (minutes=0; minutes <59; minutes++)
		{
			hour_char1 = (hours / 10) + '0';
			hour_char2 = (hours % 10) + '0';
			minute_char1 = (minutes / 10) + '0';
			minute_char2 = (minutes % 10) + '0';

			_putchar(hour_char1);
			_putchar(hour_char2);
			_putchar(':');
			_putchar(minute_char1);
			_putchar(minute_char2);
			_putchar('\n');
		}
	}
}
