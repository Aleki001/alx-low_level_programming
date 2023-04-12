#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *argstostr - concatenates arguments
 *@ac: argument count
 *@av: arguments
 *Return: concatenated string , otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int length = 0, count = 0;
	int i, j;
	char *concat, *m;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		m = av[i];
		j = 0;

		while (m[j++])
		{
			length++;
		}
		length++;
	}

	concat = (char *)malloc((length + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);
	for (i = 0, j = 0; (i < ac && j < length); i++)
	{
		m = av[i];

		while (m[count])
		{
			concat[j] = m[count];
			count++;
			j++;
		}

		concat[j++] = '\n';
	}
	concat[j] = '\0';
	return (concat);
}
