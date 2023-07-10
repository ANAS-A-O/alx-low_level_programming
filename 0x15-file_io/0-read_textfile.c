#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text
 * @filename: text file
 * @letters: number
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t wr;
	ssize_t tf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	tf = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, tf);

	free(buffer);
	close(fd);
	return (wr);
}
