#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str : string to duplicate
 * Return: pointer to the duplicate
 */
char *_strdup(char *str)
{
	char *p = str;
	int size = 0;

	if (*str == '\0')
	{
		return (NULL);
	}

	while (*p != '\0')
	{
		size++;
		p++;
	}
	size += 1;
	p = str;

	char *dupl = malloc (size * sizeof(char));
	char *duplp = dupl;
	while (*p != '\0')
	{
		*duplp = *p;
		p++;
		duplp++;
	}
	*duplp = '\0';
	return (dupl);
}
