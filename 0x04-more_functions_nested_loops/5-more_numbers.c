#include "main.h"
/**
 * more_numbers - prints from 0 to 14, 10 times
 * description : look above
 * Return: None
 */
void more_numbers(void)
{
	int times;
	int count;

	for (times = 0; times < 11; times++)
	{
		for(count = 0; count < 15; count++)
		{
			if (count > 9)
			{
				_putchar((count / 10) + '0');
				_putchar((count % 10) + '0');
			}
			else
			{
				_putchar(count + '0');
			}
		}
		_putchar('\n');
	}
}
