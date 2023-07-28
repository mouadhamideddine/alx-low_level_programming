#include "main.h"
/**
 * leet - encodes string into 1337
 *@str : string
 *Return: Pointer to str
 */
char *leet(char *str)
{
	char *p = str;
	char char_array[] = "aAeEoOtTlL";
	char num_array[] = "4433007711";
	int index;

	while (*p =! '\0')
	{
		for (index = 0; index < 10; index++)
		{
			if (*p == char_array[index])
			{
				*p = num_array[index];
				break;
			}
		}
		p++;
	}
	return (str);
}
