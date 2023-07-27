#include "main.h"
/**
 * string_toupper - changes all lowercase to upper
 * Return: Pointer
 */
char *string_toupper(char *str)
{
	int length_str = 0;
	int asci_value = 0;
	char ch;

	if (*str == '\0')
	{
		return;
	}
	while (str[length_str] != '\n')
	{
		length_str++;
	}
	for (; length_str > 0; length_str--)
	{
		asci_value = (int) str[length_str];
		if (asci_value >= 65 && asci_value <= 90)
		{
			;
		}
		else if (asci_value >= 97 && asci_value <= 122)
		{
			asci_value = asci_value - 32;
			ch = (char) asci_value;
			str[length_str] = ch;
		}
	}
	return (str);
}
