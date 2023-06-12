#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Create a file and write text content to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file (optional).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc; /* File descriptor */
	ssize_t numBytes;  /* Bytes written */

	if (filename == NULL)
		return (-1);

	fileDesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fileDesc == -1)
		return (-1);

	if (text_content != NULL)
	{
		numBytes = write(fileDesc, text_content, strlen(text_content));

		if (numBytes == -1)
			return (-1);
	}

	close(fileDesc);  /* Close the file */

	return (1);
}
