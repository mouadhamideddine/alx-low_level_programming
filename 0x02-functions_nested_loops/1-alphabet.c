#include "main.h"
/**
 *print_alphabet - function 
 *
 *description : print alphabets
 *
 *Return: None (success)
 */
void print_alphabet(void)
{
	int index = 97;

	for (; index < 123; index++)
	{
		_putchar(index);
	}
	_putchar('\n');
}
