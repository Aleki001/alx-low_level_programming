#include "main.h"
/**
 *_strlen_recursion - checks length of string
 *@s: pointer to the string
 *Return: length of string or 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));

}
