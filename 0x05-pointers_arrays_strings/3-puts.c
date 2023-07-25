#include "main.h"

/**
 * _puts - funciton
 * description : prints a string followed by a new line
 * @str : string pointer to be printed
 * Return: None
 */
void _puts(char *str)
{
	

	while (*str != '\0')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
