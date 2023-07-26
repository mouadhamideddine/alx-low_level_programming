#include "main.h"
/**
 * _strncat - appends a specified number of characters from
 *  one string to the end of another string.
 *@dest : destination string
 *@src : source string
 *@n : number of characters to be appended
 *Return: pointer to src
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest = 0;
	int length_src = 0;

	/**came back to loops*/
	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}
	while (src[length_src] != '\0')
	{
		length_src++;
	}
	if (n > length_src)
	{
		n = length_src;
	}
	for (; n > 0; n--)
	{
		dest[length_dest] = *src ;
		length_dest++;
		src++;
	}
	dest[length_dest] = '\0';
	return (dest);
}
