#include "main.h"
/**
 *create_file - creates a file
 *@filename: pointer to filename
 *@text_content: Null terminated string to write
 *Return: 1 or -1 when it fails
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int fd, bw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		while (text_content[count])
		{
			count++;
		}
	}

	bw = write(fd, text_content, count);
	if (fd < 0 || bw < 0)
		return (-1);

	close(fd);

	return (1);
}
