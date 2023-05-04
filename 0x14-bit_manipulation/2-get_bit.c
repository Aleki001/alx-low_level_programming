#include "main.h"
/**
 *get_bit - retarns value of bit at given index
 *@n: integer
 *@index: index to check
 *Return: value of index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int no;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);


	no = 1 << index;

	if (n & no)
		return (1);
	else
		return (0);

}
