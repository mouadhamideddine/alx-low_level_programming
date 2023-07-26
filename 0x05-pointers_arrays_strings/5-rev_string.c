#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int length = 0;
	int counter = 0;
	char store;

	if (*s == '\0')
	{
		return;
	}
	/**determine length*/
	while (s[length] != '\0')
	{
		length++;
	}
	length--;

	char *end = &s[length];
	char *start = &s[0];
	while (start < end)
	{
		store = *start;
		*start = *end ;
		*end = store;
		start++;
		end--;
	}
}
