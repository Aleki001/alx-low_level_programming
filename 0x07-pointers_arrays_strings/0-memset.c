#include "main.h"
/**
 * _memset - function that fills the memory
 *@s: memory area
 *@b: value to be filled with
 *@n: no of times to fill
 *Return: s (pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}

	return (s);

}

