#include <stdio.h>
/**
 * main - The Entry Function
 * Return: Zero
 */
int main(void)
{
	int i, m;

	for (i = 0 ; i < 9 ; i++)
	{
		for (m = i + 1 ; m < 10 ; m++)
		{
			putchar(i + '0');
			putchar(m + '0');
			if (m < 9)
				{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
