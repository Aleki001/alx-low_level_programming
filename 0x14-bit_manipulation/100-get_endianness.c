#include "main.h"
/**
 *get_endianness - checks the endianness
 *Return: void
 */
int get_endianness(void)
{
	char *m;
	int y;

	y = 1;
	m = (char *)&y;

	if (*m == 1)
		return (1);
	else
		return (0);

}
