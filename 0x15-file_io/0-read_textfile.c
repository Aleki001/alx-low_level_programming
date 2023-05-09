#include "main.h"
/**
 *read_textfile - reads text file and fprints tp standard output
 *@filename: name of the file
 *@letters: no letters it should print
 *Return: actual no of letters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, br, bw;

	if (filename == NULL)
		return (0);

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	br = read(fd, buf, letters);
	if (br == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	bw = write(STDOUT_FILENO, buf, br);
	if (bw == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);

	return (bw);
}
