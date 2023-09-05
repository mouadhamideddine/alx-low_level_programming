#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * _strlen - Calculate the length of a null-terminated string.
 * @str: A pointer to the string to be measured.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}
/**
 * append_text_to_file - as suggests
 * @filename : file name
 * @text_content : text
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (!text_content && fd == -1)
		return (-1);

	if(!text_content && fd != -1)
		return (1);

	bytes_w = write(fd, text_content, _strlen(text_content));

	if (bytes_w == -1)
		return (-1);

	return(1);
}
