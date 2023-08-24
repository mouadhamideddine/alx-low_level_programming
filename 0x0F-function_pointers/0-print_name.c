#include "function_pointers.h"
/**
 * print_name - print a name
 * @name : array of chars
 * @f : function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
