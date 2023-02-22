#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: variables to check
 * Return: 1 Success if alphabet
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
