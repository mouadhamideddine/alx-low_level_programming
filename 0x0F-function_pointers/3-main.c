#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - calculates depending on stdinput
 * @argc : argument count
 * @argv : argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a,b;
	int (*fun_ptr)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		return(100);
	}
	if(get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return(99);
	}
	fun_ptr = get_op_func(argv[2]);
	result = fun_ptr(a, b);
	printf("%d\n", result);
	return(0);
}
