#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates arrays of chars
 *@size: size of array
 *@c: character
 *Return: pointer of allocated memory
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (size == 0)
	{
		printf("NULL\n");
	}

	ptr = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);

}
