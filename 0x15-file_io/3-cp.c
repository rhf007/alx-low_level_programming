#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
 * note, sorry for structure
 */

int main(int argc, char *argv[])
{
	int fdfro, fdto, bytesread, byteswrite;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fdfro = open(argv[1], O_RDONLY);
	fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	bytesread = read(fdfro, buff, 1024);
	byteswrite = write(fdto, buff, bytesread);

	if (fdfro == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fdto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (bytesread > 0)
		if (byteswrite != bytesread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	if (bytesread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fdfro) != -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdfro), exit(100);
	if (close(fdto) != -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdto), exit(100);
	return (0);
}
