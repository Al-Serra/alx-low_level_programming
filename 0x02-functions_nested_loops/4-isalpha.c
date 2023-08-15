#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character,
 * lowercase or uppercase
 * @c: the character()parameter to be checked
 * Return: 1 for alphabetic charater, 0 for else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);

}
