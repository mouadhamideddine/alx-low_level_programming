#include <stdio.h>
#include "main.h"
/**
 * main - prints name of the program
 * @argv : argv
 * @argc : argument count
 * Return: None
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
