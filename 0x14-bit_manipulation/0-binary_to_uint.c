#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		x <<= 1;

		if (b[i] == '1')
		{
			x |= 1;
		}
	}

	return (x);
}
