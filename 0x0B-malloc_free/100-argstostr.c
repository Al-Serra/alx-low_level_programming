#include "main.h"
/**
 * _strlen - to find the lenght
 * @s: the string
 * Return: integer
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: integer
 * @av: an argument
 * Return: a pointer to a new string, or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, n = 0, count = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, n++)
		n += _strlen(av[i]);

	s = malloc(sizeof(char) * n + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, count++)
			s[count] = av[i][j];
		s[count] = '\n';
		count++;
	}
	s[count] = '\0';
	return (s);
}
