#include <stdio.h>
/**
 *main - Entry point
 *
 *description : iterate through alphabets and print them upper and lowercase
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char Up_Letter;
	char Low_Letter;
	int Count;
	int Count_Low;

	Count_low = 0
	for (; Count_Low < 26; Count_Low++)
	{
		Low_Letter = 'a' + Count_Low;
		putchar(Low_Letter);
	}
	Count = 0
	for (; Count < 26; Count++)
	{
		Up_Letter = 'A' + Count;
		putchar(Up_Letter);
	}
	putchar('\n');
	return (0);
}

