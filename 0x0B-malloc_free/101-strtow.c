#include "main.h"
/**
 * wrdcnt - to count the num of words in a string
 * @s: string
 * Return: integer
 */
int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
/**
 * strtow - to splits a string into words
 * @str: thr string
 * Return: a pointer to an array of a string, or NULL otherwise
 */
char **strtow(char *str)
{
	int i, j, k, h;
	int n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (h = 0; h < j; h++)
				w[wc][h] = str[i + h];
			w[wc][h] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}

