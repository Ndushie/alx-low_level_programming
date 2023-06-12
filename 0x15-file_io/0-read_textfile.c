#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileDescriptor;
	ssize_t numByteswrite;
	ssize_t numBytesread;
	char *buffer;

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	numBytesread = read(fileDescriptor, buffer, letters);
	numByteswrite = write(STDOUT_FILENO, buffer, numBytesread);

	free(buffer);
	close(fileDescriptor);

	return (numByteswrite);
}
