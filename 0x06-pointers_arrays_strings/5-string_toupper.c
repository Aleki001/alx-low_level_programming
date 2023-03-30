#include <stdio.h>
#include <string.h>
/**
 *string_toupper - converts lowercase to upper
 *@s: parameter
 *Return: character
 */
char *string_toupper(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
	}
	return (s);
}
