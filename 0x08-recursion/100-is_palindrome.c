#include "main.h"
/**
 * _strlen_recursion - to print the length of a string
 * @s: the printed string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * check_pal - check if s is palindrome
 * @s: the string
 * @i: left index
 * @j: right index
 * Return: 1 if s is palindrome, 0 if not
 */
int check_pal(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (check_pal(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome
 * and 0 if not
 * @s: the string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	return (check_pal(s, 0, _strlen_recursion(s) - 1));
}
