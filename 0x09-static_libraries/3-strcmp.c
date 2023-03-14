#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: copied string destination
 * @s2: string to copy
 * Return: 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
