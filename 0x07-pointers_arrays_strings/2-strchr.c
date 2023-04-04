#include "main.h"
/**
 *_strchr - locates a character in string
 *@s: pointer to string
 *@c: chracter to be located
 *Return: pointer to charcter occurence
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}

	return (NULL);
}
