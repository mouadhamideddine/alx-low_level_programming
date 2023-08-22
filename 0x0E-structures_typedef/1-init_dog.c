#include "dog.h"
/**
 * init_dog - creates a struct
 * @dog : char parametre
 * @name : char parametre
 * @age : float parametre
 * @owner : char parametre
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
