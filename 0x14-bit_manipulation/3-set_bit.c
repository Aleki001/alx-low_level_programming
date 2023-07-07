#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: number
 * @index: index to set value at
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (n == NULL)
		return (-1);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = 1UL << index;
	*n |= m;

	return (1);
}
