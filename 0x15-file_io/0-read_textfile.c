#include "main.h"
/**
 * read_textfile - reads file and prints to POSIX output
 * @filename: file to be read;
 * @letters: size of the letters to be read
 * Return: actual no letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char  *buffer;
	ssize_t bw, br, bo;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL || buffer == NULL)
		return (0);
	bo = open(filename, O_RDONLY);
	br = read(bo, buffer, letters);
	bw = write(STDOUT_FILENO, buffer, br);

	if (bw == -1 || bo == -1 || br == -1 || br != bw)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(bo);

	return (bw);
}

