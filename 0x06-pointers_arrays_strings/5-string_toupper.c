#include <stdio.h>
#include <string.h>
/**
 *string_toupper - converts lowercase to upper
 *@str: parameter
 *Return: character
 */
char *string_toupper(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
	}
	return (str);
}
