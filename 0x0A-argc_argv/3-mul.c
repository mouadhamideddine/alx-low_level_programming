#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two integers
 * @argc : argument count
 * @argv : array of arguments vector
 * Return: 0 prints multiplication , fail prints error/n and 1
 */
int main(int argc, char  *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
