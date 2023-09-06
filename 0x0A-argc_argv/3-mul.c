#include <stdio.h>
#include <stdlib.h>
/**
 * main - thr product of two integers
 * @argc: num of command line arguments
 * @argv: the array name
 * Return: 1 if arguments are not enough, or ZERO
 */
int main(int argc, char *argv[])
{
	int s, k;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		k = 1;

		for (s = 1; s < 3; s++)
			k *= atoi(argv[s]);
		printf("%d\n", k);
	}
	return (0);
}
