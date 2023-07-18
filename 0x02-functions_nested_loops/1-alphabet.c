#include "main"
/**
 * print_alphabet - print alphabets
 *
 * description : print alphabets
 *
 * Return: None (success)
 */

void print_alphabet(void)
{
	int index = 97;

	for (; index < 123; index++)
	{
		_putchar(index);
	}
}
/**
 *main - Entry point of the program
 *
 *description : print alphabets
 *
 *Return: always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
