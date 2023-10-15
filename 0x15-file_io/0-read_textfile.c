#include "main.h"

/**
 * read_textfile - function that converts a binary number to an unsigned int.
 * @filename: file to be worked on
 * @letters: number of letters it should read and print
 * Return: 0 if filename is NULL, file can not be opened or read, write fails
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes_read;

	buff = malloc(sizeof(char) * letters);

	if (filename == NULL || buff == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buff, letters);

	if (bytes_read == -1)
	{
		return (1);
	}
	buff[bytes_read] = '\0';
	close(fd);

	bytes_read = write(STDOUT_FILENO, buff, bytes_read);

	free(buff);
	return (bytes_read);
}
