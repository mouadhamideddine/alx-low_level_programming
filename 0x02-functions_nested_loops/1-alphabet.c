#include "main.h"
/**
 *main - Entry point of the program
 *
 *description : print alphabets
 *
 *Return: always 0 (success)
 */
void print_alphabet(void)
{
	int index = 97;

	for (; index < 123; index++)
	{
		_putchar(index);
	}
}

