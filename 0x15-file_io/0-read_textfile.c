#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: The name of the file to read
 * @num_letters: The maximum number of letters to read and print
 *
 * Return: The actual number of letters read and printed, or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t num_letters)
{
	if (filename == NULL)
		return (0);

	int file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	char *buffer = malloc(num_letters + 1);

	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	ssize_t bytes_read = read(file_descriptor, buffer, num_letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	buffer[bytes_read] = '\0';

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_read);
}

