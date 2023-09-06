#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - copies the content of a file to another file.
 * @argc : argument count
 * @argv[] : argument vector
 * Return: error codes , 0 success
 */
int main(int argc, char *argv[])
{
	int fd_p, fd_c;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return(97);
	}
	
	fd_p = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (fd_p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	fd_c = open(argv[1], O_RDONLY);

	if (fd_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	while (1)
	{
		bytes_read = read(fd_c, buffer, 1024);
		if (bytes_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(fd_c);
			close(fd_p);
			return (98);
		}
		if (bytes_read == 0)
			break;
		bytes_written = write(fd_p, buffer, bytes_read);
		if (bytes_written < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_c);
			close(fd_p);
			return (99);
		}
	}
	close(fd_c);
	close(fd_p);
	return(0);
}
