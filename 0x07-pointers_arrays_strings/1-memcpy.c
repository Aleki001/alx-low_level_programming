#include "main.h"
/**
 *_memcpy - function that copies n bytes
 *@dest: destination
 *@src: source
 *@n: no of bytes
 *Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
