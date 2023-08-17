#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character(parameter)to be checked
 * Return: ZERO for otherwise, one for uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
