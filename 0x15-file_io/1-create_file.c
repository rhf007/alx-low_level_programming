#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * The created file must have those permissions: rw-------. If the file already
 * exists, do not change the permissions.
 * if the file already exists, truncate it
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes, len;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
		{
			;
		}
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	bytes = write(fd, text_content, len);

	if (fd == -1 || bytes == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
