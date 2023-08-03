#include "main.h"
/**
 * _strchr - Returns a pointer to the first
 * occurrence of the character c in the string s,
 * or NULL if the character is not found
 *@s : pointer to the string
 *@c : character to search for
 *Return: pointer to 1st occurent of @c in @s or null
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
