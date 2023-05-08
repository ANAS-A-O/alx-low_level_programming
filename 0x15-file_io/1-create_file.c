#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer to the file
 * @text_content: pointer to  string
 *
 * Return: 1 or -1 in fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int lenght;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wr = write(fd, text_content, lenght);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
