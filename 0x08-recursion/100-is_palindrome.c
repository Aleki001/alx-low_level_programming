#include "main.h"
/**
 * _strlen_recursion - prints length
 *@s: string
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);

}
/**
 * is_palindrome - check if s is palindrome
 *@s: string
 *Return: 1 if prime, 0
 */
int is_palindrome(char *s)
{
	return (palindrome(s, 0, _strlen_recursion(s) - 1));

}

/**
 *palindrome - check if palindrome.
 * @s: string base address.
 * @index1: index1.
 * @index2: index2.
 * Return: 1 if palindrome, 0 otherwise.
 */
int palindrome(char *s, int index1, int index2)
{
	if (s[index1] == s[index2])
		if (index1 > index2 / 2)
			return (1);
		else
			return (palindrome(s, index1 + 1, index2 - 1));
	else
		return (0);
}
