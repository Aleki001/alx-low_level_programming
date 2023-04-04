#include "main.h"
/**
 *_strpbrk - locates occurence in sting s
 *@s: string to check
 *@accept: to be checked
 *Return: pointer to ye s that matches one of bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');

}
