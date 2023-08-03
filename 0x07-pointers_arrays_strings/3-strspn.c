#include "main.h"
/**
 * _strspn - fucntion
 * @s : string provided
 * @accept : accept set of chars
 * Return: the number of bytes in the initial segment @s that consist only of @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *p_accept = accept;

	if (*s == '\0' || *accept == '\0')
	{
		return (length);
	}

	while (*s != '\0')
	{
		while (*p_accept != *s)
		{
			if (*s == '\0')
			{
				return (length);
			}
			p_accept++;
		}
		p_accept = accept;
		length++;
		s++;
	}
	return (length);
}
