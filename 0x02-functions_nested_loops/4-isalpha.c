#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: variables to check
 * Return: 1 Success if alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
