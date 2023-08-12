#include <stdio.h>
/**
 * main - The Entry Function
 * Return: Zero
 */
int main(void)
{
	int i, m;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (m = 0 ; m <= 9 ; m++)
		{
			putchar(i + '0');
			putchar(m + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
