#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 * Return: the intger converted from the string
 */
int _atoi(char *s)
{
	int i = 0;
	int d = 0;
	int n = 0;
	int len = 0;
	int k = 0;
	int dt = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && k == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			dt = s[i] - '0';
			if (d % 2)
				dt = -dt;
			n = n * 10 + dt;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}
	if (k == 0)
		return (0);
	return (n);
}
