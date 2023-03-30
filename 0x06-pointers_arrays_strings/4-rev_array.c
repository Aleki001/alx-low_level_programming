#include "main.h"
/**
 *reverse_array - reverses content of array
 *@a: array to be reversed
 *@n: number of elements
 *Return: null
 */
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n; i++)
{
n--;
temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}
