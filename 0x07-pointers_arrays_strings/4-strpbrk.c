#include "main.h"
/**
 *_strpbrk - locates the first occurrence in the string @s
 *of any of the bytes in the string @accept
 *@s : pointer to a string
 *@accept : accept set
 *Return: pointer to the byte in @s that matches one of
 *the bytes in @accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p_accept = accept;
	char *p_s = s;
	while (*p_s != '\0')
	{
		while (*p_accept != '\0')
		{
			if (*p_s == *p_accept)
			{
				return (p_s);
			}
			p_accept++;
		}
		p_accept = accept;
		p_s++;
	}
	return (p_s);
}
