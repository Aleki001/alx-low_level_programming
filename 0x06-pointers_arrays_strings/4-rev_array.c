#include "mainh"
/**
 *reverse_array - reverses content of array
 *@a: array to be reversed
 *@n: number of elements
 *Return: null
 */
void reverse_array(int *a, int n)
{
	int i, swap;

	for (int i = 0; i < n; i++)
	{
		n--;
		swap = a[i];
		a[i] = a[n];
		a[n] = swap;
	}

}
