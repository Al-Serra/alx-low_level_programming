#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
/**
 * coinconverter - mathematics function
 * @s: a variable to calculate
 * Return: the minimum number of coins needed
 */
int coinconverter(int s)
{
	int count = 0;

	while (s != 0)
	{
		if (s % 10 == 9 || s % 10 == 7)
			s -= 2;
		else if (s % 25 == 0)
			s -= 25;
		else if (s % 10 == 0)
			s -= 10;
		else if (s % 5 == 0)
			s -= 5;
		else if (s % 2 == 0)
		{
			if (s % 10 == 0)
				s -= 1;
			else
				s -= 2;
		}
		else
			s -= 1;
		count++;
	}
	return (count);
}
/**
 * main - the minimum number of coins to make change for an amount of money
 * @argc: num of line arguments
 * @argv: array name
 * Return: ZERO if one argument passed,
 * 1 if not excatly
 */
int main(int argc, char *argv[])
{
	int k, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	k = atoi(argv[1]);
	if (k < 0)
		printf("0\n");
	else
	{
		coin = coinconverter(k);
		printf("%d\n", coin);
	}
	return (0);
}
