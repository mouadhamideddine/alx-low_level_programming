#include "main.h"
/**
 *_strncpy - copies a string.
 *@dest : destination string
 *@src : source string
 *@n : maximum number of chars to be copied
 *return: pointer to src
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *pd = dest;
	char store;
	
	if (*pd == '\0')
	{
		return (dest);
	}

	for (; n > 0; n--)
	{
		*pd = *src;
		pd++;
		src++;
	}
