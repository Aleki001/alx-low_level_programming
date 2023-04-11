#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates 2 strings
 *@s1: source
 *@s2: destination
 *Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int l1, l2, l;
	char *concat;

	if (s1 != NULL)
		l1 = 0;
		while (s1[l1] != '\0')
		{
			l1++;
		}

	if (s2 != NULL)
		l2 = 0;
		while (s2[l2] != '\0')
		{
			l2++;
		}

	l = l1 + l2;

	concat = (char *)malloc(sizeof(char) * (l + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < l2; j++, i++)
	{
		concat[i] = s2[i];
	}

	concat[l] = '\0';

	return (concat);

}
