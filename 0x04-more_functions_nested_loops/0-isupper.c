#include "main.h"
/**
 * _isupper - checks the code if is upper
 *
 *@c: character to check
 *
 * Return: always 1 unless alphabet is not upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
