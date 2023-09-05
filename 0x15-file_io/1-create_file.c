#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _strlen - Calculate the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string (excluding the null terminator).
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return length;
}
/**
 * create_file - creates file
 * @filename :name of the file to be created
 * @text_content = string/text
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	size_t len = 0;
	int fd;
	ssize_t Bytes_w;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	Bytes_w = write (fd, text_content,_strlen(text_content));
	if (Bytes_w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
