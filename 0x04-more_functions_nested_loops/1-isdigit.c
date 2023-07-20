#include "main.h"
int _isdigit(int c)
{
	c = c + '0';
	if (c >= 30 && c <= 39)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
