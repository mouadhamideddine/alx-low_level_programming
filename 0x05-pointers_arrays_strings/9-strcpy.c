#include "main.h"

/**
 * char *_strcpy - copie strg pointed to
 * @dest:  to
 * @src: from
 * Return: str
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int f = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; f < l ; f++)
	{
		dest[f] = src[f];
	}
	dest[l] = '\0';
	return (dest);
}
