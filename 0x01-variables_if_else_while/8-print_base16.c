#include <stdio.h>
/**
 * main - Entry
 *
 * description : prints hexa
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;

	count = 0;
	for (; count <= 9; count++)
	{
		putchar('0' + count);
	}
	count = 0;
	for (; count <= 5 ; count++)
	{
		putchar('a' + count);
	}
	putchar('\n');
	return (0);
}
