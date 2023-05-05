#include "main.h"
/**
 *set_bit - sets value of a bit to 1 at given index
 *@n: integer
 *@index: index
 *Return: 1 0r -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n |= 1 << index;

	return (1);

}
