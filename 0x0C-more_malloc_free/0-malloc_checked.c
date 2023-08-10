#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b : size allocated
 * Return: pointer to allocated mem or return 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc (b);
	
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
