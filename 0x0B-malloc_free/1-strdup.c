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
	char *dupl;
	char *duplp;

	if (str == NULL)
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

	dupl = malloc (size * sizeof(char));

	if (dupl ==NULL)
	{
		return (NULL);
	}

	duplp = dupl;
	while (*p != '\0')
	{
		*duplp = *p;
		p++;
		duplp++;
	}
	*duplp = '\0';
	return (dupl);
}
