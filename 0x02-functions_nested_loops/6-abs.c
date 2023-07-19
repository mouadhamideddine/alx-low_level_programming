#include "main.h"
/**
 * _abs - function
 *
 * description : return absolute of a number
 *
 * @x : input
 *
 * Return: Absolute of an integer
 *
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (-x);
	}
	else if (x == 0)
	{
		return (x);
	}
return (0);
}
