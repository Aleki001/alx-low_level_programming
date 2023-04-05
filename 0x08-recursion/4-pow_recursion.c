#include "main.h"
/**
 *_pow_recursion - return the power
 *@x: the number to be raised
 *@y: power
 *Return: the power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}

