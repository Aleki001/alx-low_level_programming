#include "main.h"
#include <stdio.h>
/**
 * get_bit - gets value of bit at given point
 * @n: value to check
 * @index: index of no to check
 * Return: -1 or value of no
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m, x;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = 1UL << index;
	x = ((n & m) != 0);

	return (x);

}
