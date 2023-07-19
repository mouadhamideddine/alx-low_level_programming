#include "main.h"
/**
 * _isalpha - function
 *
 * description : discovers if parametre is alpha or not
 *
 * @c : input
 *
 * Return: 1 if c is letter else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
