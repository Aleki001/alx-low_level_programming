#include "main.h"
/**
 *flip_bits - no of bits you would need to flip one no to another
 *@n: first no
 *@m: second no
 *Return: no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int no = 0;
	unsigned long int a;

	a = n ^ m;

	for (; a != 0;)
	{
		no += a & 1;
		a >>= 1;
	}

	return (no);

}
