#include "main.h"
/**
 * _strcat - appends a string to the eng of a string
 * @dest : destination string
 * @src : source string
 * Return: pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	int length_dest = 0;

	/**determine size of dest*/
	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}
	/**determine size of src including null* NO Need you just append it to dest*/
	while (*src != '\0')
	{
		dest[length_dest] = *src;
		length_dest++;
		src++;
	}
	length_dest++;
	dest[length_dest] = '\0';
	return (dest);
}
