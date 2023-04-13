#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *array_range - creates array of integers
 *@min: minimum integer
 *@max: maximum integer
 *Return: pointer of array otherwise NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int len = (max - min) + 1;

	if (min > max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}

	return (array);
}
