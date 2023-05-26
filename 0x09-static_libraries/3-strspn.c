#include "main.h"
/**
 *_strspn - gets length od prefix substring
 *@s: chracters to check
 *@accept: characters to accept
 *Return: no of bytes in initial that are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

		if (accept[j] == '\0')
		{
			break;
		}

	}

	return (i);

}
