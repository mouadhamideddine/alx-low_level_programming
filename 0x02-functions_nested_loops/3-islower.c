#include "main.h"
/**
 * int _islower - function
 *
 * description : check if lower
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
