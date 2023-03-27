#include "main.h"
/**
 * swap_int - swaps values of 2 integers
 *@a: pointer a
 *@b: pointer b
 *Return: always null
 */
void swap_int(int *a, int *b)
{
	int s;
	int d;

	s = *a;
	d = *b;
	*b = s;
	*a = d;
}
