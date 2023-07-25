#include "main.h"

/**
 * _puts - funciton
 * description : prints a string followed by a new line
 * @str : string pointer to be printed
 * Return: None
 */
void _puts(char *str)
{
	char *protect = str;

	while (*protect != '\0')
	{
		_putchar(*protect);
		protect++;
	}
	_putchar('\n');
}
