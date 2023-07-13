#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on sucess, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes;

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

	fd = open(filename, O_WRONLY | O_APPEND);
	bytes = write(fd, text_content, len);

	if (fd == -1 || bytes == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
