#include "main.h"
/**
 * print_last_digit - function
 *
 *description : print_last_digit
 *
 * Return: returns values of the last digit
 */
int print_last_digit(int x)
{
	int digit;
	if (x < 0)
	{
		x = -x;
	}
	digit = x % 10;
	_putchar(digit + '0');
	return (digit);
}
