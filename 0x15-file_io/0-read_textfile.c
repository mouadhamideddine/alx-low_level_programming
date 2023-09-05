#include <sys/types.h>
#include <fcnt1.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read file
 * @filename : file name
 * @letters : how many letters to print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t Bytes_Read, Bytes_Written;

	if (!filename)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(letters +1);
	Bytes_Read = read(file, buffer, letters);
	Bytes_Written = write(STDOUT_FILENO, buffer, Bytes_Read);
	close(file);
	free(buffer);
	return (Bytes_Written);
}
