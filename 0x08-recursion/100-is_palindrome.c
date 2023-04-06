#include "main.h"
/**
 * _strlen_recursion - prints length
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}


/**
 * palindrome - check if palindrome
 * @s: string
 * @i: start index
 * @j: end index
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	return (palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len == 0)
		return (1);

	return (palindrome(s, 0, len - 1));
}

