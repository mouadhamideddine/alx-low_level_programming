#include "main.h"
/**
 * _islower - function
 *
 * description : check if parametre c is lower
 *
 * @c : input
 *
 * Return: 1 if lower 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
