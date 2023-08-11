#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strs
 * @s1 : str to be added to
 * @s2 : str to be added to @s1
 * @n : number of first chars to be taken from @s2
 * Return: pointer (success) NULL (fail)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int count = 0,
	unsigned int count1 = 0;
	unsigned int size_s1 = 0;
	unsigned int size_s2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size_s1] != '\0')
	{
		size_s1++;
	}
	while (s2[size_s2] != '\0')
	{
		size_s2++;
	}
	result = malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (count1 = 0; count1 < size_s1; count1++)
	{
		result[count1] = s1[count1];
	}
	if (n >= size_s2)
	{
		n = size_s2;
	}
	for (count = 0; count < n ;count++)
	{
		result[count1] = s2[count];
		count1++;
	}
	result[count1] = '\0';
	return (result);
}
