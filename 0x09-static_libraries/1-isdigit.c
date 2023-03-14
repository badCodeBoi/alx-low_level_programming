#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: input to be checked
 * Return: 1 (for digit) 0 for other types
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
