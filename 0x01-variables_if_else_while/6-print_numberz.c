#include <stdio.h>
/**
 *main - Entry point
 *
 * description : print from 0 to 9
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int Count;

	Count = 0;
	for (; Count < 10; Count++)
	{
		putchar('0' + Count);
	}
	putchar('\n');
	return (0);
}
