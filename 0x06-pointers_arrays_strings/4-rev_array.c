#include "main"
/**
 *reverse_array - reverses content of array
 *@a: array to be reversed
 *@n: number of elements
 *Return: null
 */
void reverse_array(int *a, int n)
{
	for (int i = n - 1; i > 0; i--)
	{
		printf("%d", a[i]);
	}

}
