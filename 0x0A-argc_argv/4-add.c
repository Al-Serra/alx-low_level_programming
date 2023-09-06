#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - return the sum of all integers
 * @argc: num of line arguments
 * @argv: the array name
 * Return: 1 if  number contains symbols that are not digits,
 * or ZERO If no number is passed to the program
 */
int main(int argc, char *argv[])
{
	int s, k, len, sum;
	char *p;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (s = 1; s < argc; s++)
		{
			p = argv[s];
			len = strlen(p);
			for (k = 0; k < len; k++)
			{
				if (isdigit(*(p + k)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[s]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

