#include "dog.h"
/**
 * new_dog - creates a new dog
 * @age : age
 * @owner : owner
 * @name : name
 * Return: dog_t (struct dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dawg = malloc(sizeof(dog_t));

	if (new_dawg == NULL)
	{
		return (NULL);
	}
	new_dawg->owner = owner;
	new_dawg->age = age;
	new_dawg->name = name;
	return(new_dawg);
}
