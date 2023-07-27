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
	int token = 1;
	int delimiter_incre;

	while (*p != ('\0'))
	{

		/**Delimiter search*/
		if (token == 0)
		{
			for (delimiter_incre = 0; delimiter_incre < 13; delimiter_incre++)
			{
				if (*p == delimiters[delimiter_incre])
				{
					token = 1;
					p++;
					break;
				}
			}
			if (token == 0)
			{
				p++;
			}
		}
		/**End*/

		/** START code to replace a character to upper*/
		if ((*p >= 'a' && *p <= 'z') && token == 1)
		{
			*p -= ( 'a' - 'A');
			token = 0;
			p++;
		}
		else
		{
			token = 0;
		}
		/**END*/
	}
	return (str);
}
