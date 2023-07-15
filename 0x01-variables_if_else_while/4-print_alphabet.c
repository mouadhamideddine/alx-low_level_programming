#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * description : print all alpha in low case except q e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Letter;
	int Count;

	for (Count = 0; Count < 26; Count++)
	{
		if (Count == 4 || Count == 16)
		{
			continue; }
		Letter = 'a' + Count;
		putchar(Letter);
	}
	putchar('\n');
	return  (0);
}

