#include "main.h"
#include <sys/types.h>
#include <stdlib.h>

/**
 * read_textfile - Function reads a text and prints it to the
 * POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters it should read and print
 * Return: 0 if file name is NULL, file can't open or read,
 * write fails or does not write expected bytes,
 *
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	void *buf;
	ssize_t num, num1;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (0);

	if (filename == NULL || letters == '\0')
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	num = read(fd, buf, letters);

	if (num == -1)
		return (0);

	num1 = write(STDOUT_FILENO, buf, letters);
	if (num1 == -1)
		return (0);

	close(fd);
	return (num);

}
