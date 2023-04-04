#include "main.h"
/**
 *_strstr - locates a substring
 *@needle: the string to find
 *@haystack: where to find the needle
 *Return: pointer to beginning of substring, NULL IS NOT FOUND
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int m = 0, n = 0;

	while (haystack[m])
	{
		while (needle[n] && (haystack[m] == needle[0]))
		{
			if (haystack[m + n] == needle[n])
			{
				n++;
			}
			else
			{
				break;
			}
	}

	if (needle[n])
	{
		m++;
		n = 0;
	}
	else
	{
		return (haystack + m);
	}

	return (0);
}
