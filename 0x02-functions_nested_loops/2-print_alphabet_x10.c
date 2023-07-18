#include "main.h"

void print_alphabet_x10(void)
{
	int Index = 97;
	int Count = 0;
	
	for (; Count < 10; Count++)
	{
		for (; Index < 123; Index++)
		{
			_putchar(Index);
		}
		_putchar('\n');
	}
