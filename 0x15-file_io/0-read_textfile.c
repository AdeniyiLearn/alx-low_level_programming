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

	if (buff == NULL)
	{
		return (0);
	}

        fd = open(filename, O_RDWR);

        if (fd < 0 || filename == NULL)
        {
                perror("Error opening file");
                return 0;
        }

        bytes_read = read(fd, buff, letters);
        printf("Read from my file: %s\n", buff);

        if (bytes_read == -1)
        {
                perror("Error opening File");
                return (1);
        }

        close(fd);

        return (bytes_read);

}
