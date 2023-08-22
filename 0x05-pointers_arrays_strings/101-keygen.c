#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 * Return: ZERO
 */
int main(void)
{
	int p[100];
	int i, s, n;

	s = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 78;
		s += (p[i] + '0');
		printf("%d", p[i]);
		if ((2772 - s) - '0' < 78)
		{
			n = 2772 - s - '0';
			s += n;
			printf("%d", n);
			break;
		}
	}
	return (0);
}
