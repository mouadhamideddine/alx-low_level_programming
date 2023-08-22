#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to copy.
 *
 * Description: This function copies at most n bytes from the string pointed to
 * by src to the buffer pointed to by dest. If the length of src is > than n.
 * the remaining bytes in dest are filled with null bytes.
 */
void _strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
}
/**
 * string_length - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int string_length(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * new_dog - creates a new dog
 * @age : age
 * @owner : owner
 * @name : name
 * Return: dog_t (struct dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int length = 0;
	dog_t *new_dawg = malloc(sizeof(dog_t));

	if (new_dawg == NULL)
	{
		return (NULL);
	}
	length = string_length(owner);

	new_dawg->owner = malloc((sizeof(char) * (length + 1)));
	if (new_dawg->owner == NULL)
	{
		return (NULL);
	}
	_strncpy(new_dawg->owner, owner, (length + 1));
	new_dawg->age = age;
	length = string_length(name);
	new_dawg->name = malloc((sizeof(char) * (length + 1)));
	if (new_dawg->name == NULL)
	{
		return (NULL);
	}
	_strncpy(new_dawg->name, name, (length + 1));
	return (new_dawg);
}
