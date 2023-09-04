#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: ZERO
 */
int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
		printf("%s\n", argv[s]);
	return (0);
}
