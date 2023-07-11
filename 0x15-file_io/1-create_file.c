#include "main.h"
/**
 * create_file - creates a file
 * @text_content: string to write to the file
 * @filename: name of the file to create
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int bw, bo;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	bo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bw = write(bo, text_content, length);

	if (bw == -1 || bo == -1)
		return (-1);
	close(bo);

	return (1);
}

