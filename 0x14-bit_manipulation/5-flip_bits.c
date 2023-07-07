#include "main.h"
#include <stdio.h>
/**
 * flip_bits - flips bit
 * @n: no 1
 * @m: no 2
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int count;

	count = 0;
	x = n ^ m;

	for (; x != 0; )
	{
		count += x & 1;
		x >>= 1;
	}

	return (count);
}
