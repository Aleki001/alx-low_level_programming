#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints minimum no of coins to make change
 *@argc: no of arguments
 *@argv: arguments passed
 *Return: (0)
 */
int main(int argc, char *argv[])
{
	int a, i, c = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("0\n");

		return (0);
	}

	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5 && a >0; i++)
	{
		while (a >= cents[i])
		{
			c++;
			a -= cents[i];
		}
	}

	printf("%d\n", c);

	return (0);
}
