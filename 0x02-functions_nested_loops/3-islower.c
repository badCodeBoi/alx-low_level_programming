#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c - holds the character variables
 * Returns: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
