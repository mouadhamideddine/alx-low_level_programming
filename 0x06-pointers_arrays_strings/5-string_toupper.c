#include "main.h"
/**
 * string_toupper - changes all lowercase to upper
 * Return: Pointer
 */
char *string_toupper(char *str)
{
	char *p = str ;

	if (*str == '\0')
	{
		return(str);
	}
	while (*p != ('\0'))
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= ('a' - 'A');
		}
		p++;
	}
	return(str);
}
