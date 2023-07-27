#include "main.h"
/**
 * _strcmp - similar to stcmp in standard library
 * @s1 : first string
 * @s2 : second string
 * Return: if two string equal return 0
 * else returns difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	char *ps1 = s1;
	char *ps2 = s2;
	int result = 0;

	while (*ps1 != '\0' || *ps2 != '\0')
	{
		result = (int) *ps1 - (int) *ps2;
		if (result != 0)
		{
			return(result);
		}
		ps1++;
		ps2++;
	}
	return(result);
}
