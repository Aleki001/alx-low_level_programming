#include "main.h"
/**
 *binary_to_uint - converts binary to unsigned int
 *@b: a binary number
 *Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
		{
			num = num << 1;
			num += b[i] - '0';
		}
		else
		{
			return (0);
		}

		i++;
	}

	return (num);
}
