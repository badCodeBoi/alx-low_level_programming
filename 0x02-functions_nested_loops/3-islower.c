#include "main.h"
/**
 * _islower - function to be used
 * Description: checks for lowercase characters
 * @c: 1 holds the character variables
 * Return: 0 or 1 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
