#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: 1st parameter
 * @s2: 2nd parameter
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int s;

	for (s = 0; s1[s] != '\0' || s2[s] != '\0'; s++)
	{
		if (s1[s] != s2[s])
		{
			if (s1[s] < s2[s])
				return (s1[s] - s2[s]);
			else if (s2[s] < s1[s])
				return (s1[s] - s2[s]);
		}
	}
	return (0);
}
