#include "main.h"
/**
 * _isupper - checks if upper
 * @c : inputto check
 * Return: 1 if c uppercase 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
