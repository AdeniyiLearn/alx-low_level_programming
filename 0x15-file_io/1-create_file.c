#include "main.h"
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

/**
 * create_file - Function creates a file
 * @filename: name of file to be read
 * @text_content: number of letters it should read and print
 * Return: 0 if file name is NULL, file can't open or read,
 * write fails or does not write expected bytes,
 *
 */


int create_file(const char *filename, char *text_content)
{
	int fd, num;
	mode_t perm;
	ssize_t num1;

	perm = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, perm);
		return (1);
	}

	num = strlen(text_content);

	fd = open(filename, O_WRONLY | O_CREAT, perm);
	if (fd == -1)
		return (-1);

	num1 = write(fd, text_content, num);
	if (num1 == -1)
		return (0);

	close(fd);
	return (1);
}
