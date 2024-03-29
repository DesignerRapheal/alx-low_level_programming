#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the arguments passed to the program
 *
 * Return: 0 on success, otherwise 97, 98 or 99
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, len;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((len = read(fd_from, buf, 1024)) > 0)
		if (write(fd_to, buf, len) != len)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	if (len == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}

