#include "main.h"

/**
 *append_text_to_file - cette fonction sert a appends text
 *@filename: pointer to the name of the file.
 *@text_content: string to add
 * Return: 1 or -1 in fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content)
			lenght++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, lenght);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
