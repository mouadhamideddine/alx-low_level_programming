#include <stdio.h>
/**
 * main - Entry point
 *
 * description : write from z to a
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int count;

	count = 122;
	for (; count >= 97; count--)
	{
		putchar(count);
	}
	putchar ('\n');
	return (0);
}
