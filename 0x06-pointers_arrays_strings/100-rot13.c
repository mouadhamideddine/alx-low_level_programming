#include "main.h"
/**
 * leet - encodes string into 1337
 *@str : string
 *Return: Pointer to str
 */
char *rot13(char *str)
{
	char *p = str;
	char char_array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cipher_array[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int index;

	while (*p != '\0')
	{
		for (index = 0; index < 52; index++)
		{
			if (*p == char_array[index])
			{
				*p = cipher_array[index];
				break;
			}
		}
		p++;
	}
	return (str);
}
