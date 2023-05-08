#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
  *read_textfile - fonction read a certain file
  *@filename: pointer to the file
  *@letters: number of letters to be read and write
  *Return: number of letters or 0 in fail
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t bytes_read;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));

	bytes_read = read(fd, buffer, letters);

	write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	return (bytes_read);
}
