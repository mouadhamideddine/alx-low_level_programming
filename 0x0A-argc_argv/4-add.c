#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc : arguments count
 * @argv : argument vector
 * Return: print result, print 0 if no input, if not num
 * print Error return 1
 */
int main(int argc, char *argv[])
{
	int check;
	int result = 0;
	int digit;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for(check = 1; check < argc; check++)
	{
		if (!isdigit(argv[check][0]))
		{
			printf("Error\n");
			return (1);
		}
		digit = atoi(argv[check]);
		if (digit > 0)
		{
			result += digit;
		}
	}
	printf("%d\n", result);
	exit(0);
}

