#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void error_exit(const char *message, int exit_code);
char *create_buffer(void);
void close_file(int fd);

/**
 * error_exit - Print an error message and exit with the given exit code.
 *
 * @message: The error message to print.
 * @exit_code: The exit code to use when terminating the program.
 */
void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}
/**
 * create_buffer - Allocates memory for a buffer.
 *
 * Return: Pointer to the allocated buffer, or NULL on failure.
 */
char *create_buffer(void)
{
	char *buffer = malloc(BUFFER_SIZE);

	if (buffer == NULL)
		error_exit("Error: Unable to allocate buffer", 1);

	return (buffer);
}
/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
		error_exit("Error: Can't close fd", 100);
}

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	buffer = create_buffer();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	close_file(fd_from);
	close_file(fd_to);
	free(buffer);

	return (0);
}
