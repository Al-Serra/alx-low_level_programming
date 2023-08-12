#include <stdio.h>
/**
 * main - The Entry Function
 * Return: Zero
 */
int main(void)
{
	int i;
	char m;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
