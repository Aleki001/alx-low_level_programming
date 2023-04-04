#include "main.h"
/**
 * print_diagsums - prints sum of 2 diagonals of square matrix
 * @a:start of matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int index1, index2, total;
	int sum1 = 0;
	int sum2 = 0;

	for (index1 = 0; index1 < size; index1++)
	{
		total = (index1 * size) + index1;
		sum1 += *(a + total);
	}
	for (index2 = 0; index2 < size; index2++)
	{
		total = (index2 * size) + (size - 1 - index2);
		sum2 += *(a + total);
	}

	printf("%i, %i\n", sum1, sum2);
}
