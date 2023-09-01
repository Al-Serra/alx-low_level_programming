#include "main.h"
/**
 * str_checker - to check identicality of two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @i: the left index
 * @j: special index
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[i] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[i] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical,
 * otherwise return 0
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 1 if identical
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2,0, 0));
}
