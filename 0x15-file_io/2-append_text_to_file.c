#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Append text content to an existing file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to append to the file (optional).
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor;
	ssize_t numBytes;

	if (filename == NULL)
		return (-1);

	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fileDescriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		numBytes = write(fileDescriptor, text_content, strlen(text_content));
		if (numBytes == -1)
			return (-1);
	}

	close(fileDescriptor);

	return (1);
}
