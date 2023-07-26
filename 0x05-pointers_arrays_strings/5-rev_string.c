#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int length = 0;
	char store;
	char *end;
	char *start;

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

	end = &s[length];
	start = &s[0];
	while (start < end)
	{
		store = *start;
		*start = *end;
		*end = store;
		start++;
		end--;
	}
}
