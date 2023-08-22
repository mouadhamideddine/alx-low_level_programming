#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory
 * @d : struct targeted
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
