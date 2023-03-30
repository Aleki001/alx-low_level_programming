#include "main.h"
/**
 * _strcat - concats 2 strings
 * @dest: destination string
 *@src: source string
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	for (int j = 0; *src[j] != '\0'; j++)
	{
		*dest[i] = *src[j];
		i++;
	}

	*dest[i] = '\0';

	return (dest);

}

