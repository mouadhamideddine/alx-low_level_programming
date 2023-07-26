#include "main.h"
/**
 * puts2 - function
 * description : prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str : string
 * Return: None
 */
void puts2(char *str)
{
	int index = 0;

	if (*str == '\0')
	{
		return;
	}
	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
			index++;
		}
	}
	_putchar('\n');
}
