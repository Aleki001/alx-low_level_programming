#include "main.h"
/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t i;
	ssize_t len;

	i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i])
	{
		i++;
	}

	if (text_content != NULL)
		len = write(fd, text_content, i);
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}

