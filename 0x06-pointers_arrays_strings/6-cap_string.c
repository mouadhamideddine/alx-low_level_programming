#include "main.h"
/**
 * cap_string - capitalize all first characters of words
 * @str : string
 * Return: Pointer
 */
char *cap_string(char *str)
{
	char delimiters[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	char *p = str;
	char c;

	while (*p != ('\0'))
	{
		c = *p;
		/** START code to replace a character to upper*/
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			if (c >= 'a' && c <= 'z')
			{
				*p -= ( 'a' - 'A');
			}
		}
		/**END*/
