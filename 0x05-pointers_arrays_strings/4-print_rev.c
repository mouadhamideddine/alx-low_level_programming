#include "main.h"

/**
 * print_rev - print a string in reverse
 * description : look above
 * @s : string
 * Return: None
 */
void print_rev(char *s)
{
	/**
	 * determine length of str*/
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s = s - 1;
	/** iterate through the word in reverse */
	for (; length >=0 ; length--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

