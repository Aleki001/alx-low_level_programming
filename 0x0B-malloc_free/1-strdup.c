#include "main.h"
#include <stdio.h>
/**
 *_strdup - duplicates pointer to a new allocated memory
 *@str: string to be duplicated
 *Return: null if str is null or duplicated string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	char *dup;

	dup = (char *)malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
