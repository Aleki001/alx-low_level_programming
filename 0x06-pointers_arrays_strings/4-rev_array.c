#include "main"
/**
 *reverse_array - reverses content of array
 *@a: array to be reversed
 *@n: number of elements
 *Return: null
 */
void reverse_array(int *a, int n)
{
	int i , swap;

	for (i = 0; i < (n / 2); i++)
	{
		swap = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = swap;

	}

}
