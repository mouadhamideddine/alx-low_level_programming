#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest : destination pointer
 * @src : pointer to source
 * @n : bytes to copy
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	for (; n > 0; n--)
	{
		*pdest = *src;
		pdest++;
		src++;
	}
	return (dest);
}
