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
	unsigned int j = 0;

	while (n > j)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
