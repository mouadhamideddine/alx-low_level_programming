#include "main.h"

/**
 * _strlen - returns length of a string
 * description : look up
 * @s : string
 * Return: length of str
 */

int _strlen(char *s)
{
	int len = 0;
	char *protect = s;

	while (*protect != '\0')
	{
		len++;
		protect++;

	}
	return (len);
}
