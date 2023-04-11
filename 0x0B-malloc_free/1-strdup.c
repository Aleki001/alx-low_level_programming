#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup - duplicates pointer to a new allocated memory
 *@str: string to be duplicated
 *Return: null if str is null or duplicated string
 */
char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = (char *)malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	dup[len] = '\0';

	return (dup);

}
