#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters:  number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 on failure
 * if filename is NULL or if write fails or does not write the expected amount
 * of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *text;
	size_t bytes;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}

	text = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	bytes = read(fd, &text[0], letters);
	bytes = write(STDOUT_FILENO, &text[0], bytes);
	close(fd);
	return (bytes);
}
