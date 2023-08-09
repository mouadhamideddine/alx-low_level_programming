#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concactenate two strs
 * @s1 : first string
 * @s2 : string to be added to @s1
 * Return: pointer to the concatedned str
 */
char *str_concat(char *s1, char *s2)
{
	char *ps1 = s1;
	char *ps2 = s2;
	int size_s1 = 0;
	int size_s2 = 0;
	char *conc;
	char *concp;
	int total_size = 0;


	while (*ps1 != '\0')
	{
		size_s1++;
		ps1++;
	}

	while(*ps2 != '\0')
	{
		size_s2++;
		ps2++;
	}
	if (size_s1 != 0)
	{
		size_s1 -= 1;
	}
	if (size_s2 != 0)
	{
		size_s2 -= 1;
	}
	total_size = (size_s1 + size_s2) + 1;
	conc = malloc (total_size * sizeof(char));

	if (conc == NULL)
	{
		return (NULL);
	}

	concp = conc;

	while (size_s1 > 0)
	{
		*concp = *s1;
		concp++;
		s1++;
		size_s1--;
	}
	while (size_s2 > 0)
	{
		*concp = *s2;
		concp++;
		s2++;
		size_s2--;
	}
	*concp = '\0';
	return (conc);
}
