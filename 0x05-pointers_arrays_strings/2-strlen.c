#include "main.h"
/**
 *_strlen - checks the length of string"
 *@s:character to check
 *Return: integer
 */
int _strlen(char *s)
{
	int count = 0;

	for (; *s++; )
		count++;
	return (count);
}
