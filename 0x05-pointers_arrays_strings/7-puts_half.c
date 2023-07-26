#include "main.h"
/**
 * puts_half - function
 * description :  print the second half of the string
 * @str : string
 * Return: None
 */
void puts_half(char *str)
{
	int length = 0;
	int to_be; /* num of chars to be printed */

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		to_be = length / 2;
	}
	else
	{
		to_be = (length / 2) + 1;
	}
	for (;to_be < length; to_be++)
	{
		_putchar(str[to_be]);
	}
	_putchar('\n');
}
