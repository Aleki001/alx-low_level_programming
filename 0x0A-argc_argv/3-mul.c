#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies arguments
 *@argc: no of arguments
 *@argv: arguments passed
 *Return: (0)
 */
int main(int argc, char *argv[])
{
	int multiple, no1, no2;

	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}

	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);

	multiple = no1 * no2;
	printf("%d\n", multiple);

	return (0);

}
