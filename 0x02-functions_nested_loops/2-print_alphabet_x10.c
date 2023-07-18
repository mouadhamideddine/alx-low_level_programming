#include "main.h"
/** print_alphabet_x10 - function
 *
 * description : print alphabets 10 times
 *
 * Return: Always none (success)
 */
void print_alphabet_x10(void)
{
	int Index ;
	int Count = 0;
	
	for (; Count < 10; Count++)
	{
		for (Index = 97; Index < 123; Index++)
		{
			_putchar(Index);
		}
		_putchar('\n');
	}
}
