#include "main.h"

char *cap_string(char *str)
{
	int token = 1;
	char *p = str;
	while (*p != '\0')
	{
	if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' || *p == ';' || *p == '.' || *p == '!' || *p == '?' || *p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}')
	{
		token = 1;
	}
	else if (*p >= 'a' && *p <= 'z' && token == 1)
	{
		*p -= ('a' - 'A');
		token = 0;
	}

	p++;
	}
	return (str);
}

