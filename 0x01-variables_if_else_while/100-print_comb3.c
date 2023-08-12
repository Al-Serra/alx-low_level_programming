#include <stdio.h>
/**
 * main -  prints all the smallest different combinations of two digits,
 * Numbers seperated by a comma
 * followed by a space, in ascending order
 * Return: Zero
 */
int main(void)
{
	int i, m;

	for (i = 0 ; i < 9 ; i++)
	{
		for (m = i + 1 ; m < 10 ; m++)
		{
			putchar((i % 10) + '0');
			putchar((m % 10) + '0');

			if (i == 8 && m == 9)
				continue;

			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
