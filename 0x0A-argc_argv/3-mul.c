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
	int i;
	int multiple;

	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}

	int no1 = atoi(argv[1]);
	int no2 = atoi(argv[2]);

	multiple = no1 * no2;
	printf("%d\n", multiple);

	return (0);

}
