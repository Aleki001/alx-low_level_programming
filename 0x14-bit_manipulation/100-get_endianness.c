#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks endianness
 * Return: endianness
 */
int get_endianness(void)
{
	unsigned int m;
	char *pointer;

	pointer = (char *)&m;

	return ((int) *pointer);
}


