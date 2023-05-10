#include "main.h"
/**
 *append_text_to_file - appends text to end of file
 *@filename: name of file
 *@text_content: terminated string to add at the end of file
 *Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bw, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		bw = write(fd, text_content, length);
	}

	close(fd);

	if (bw == -1)
		return (-1);

	return (1);

}
