#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints the length of a string.
 * @s: pointer to memory
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
else
	return (1 + _strlen_recursion(s + 1));
}
