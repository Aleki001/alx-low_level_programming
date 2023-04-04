#include "main.h"
/**
 *_strchr - locates a character in string
 *@s: pointer to string
 *@c: chracter to be located
 *@REturn: Null or s
 */
char *_strchr(char *s, char c)
{
	for (int i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}

	return (NULL);
}
