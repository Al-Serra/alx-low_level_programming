#include <stdio.h>
/**
 * main - print all different combinations of three digits,
 * separated by ,, followed by a space
 * Return: Zero
 */
int main(void)
{
	int i, j, m;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (m = j + 1; m < 10; m++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((m % 10) + '0');

				if (i == 7 && j == 8 && m == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
