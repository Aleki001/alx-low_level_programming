#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
/**
 *main - adds up the arguments
 *@argc: no of arguments
 *@argv: arguments passed
 *Return: (0)
 */
int main(int argc, char *argv)
{
	int i, x,
	int total = 0;
	char *symb;

	if (argc < 2)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		x = strtol(argv[i], &symb, 10);
		if (*symb)
		{
			printf("Error\n");

			return (1);
		}
		else
		{
			total += x;
		}
	}
	printf("%d\n", total);

	return (0);
}
