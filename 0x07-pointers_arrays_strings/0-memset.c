#include "main.h"
/**
 * _memset - fills memory with a constant bytes
 * @s : area pointed
 * @b : constant byte
 * @n : the first bytes that @s pointes to
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *sp = s;
	int counter = 0;
	for (; counter < n; counter++)
	{
		*sp = b;
		sp++;
	}
	return (s);
}
