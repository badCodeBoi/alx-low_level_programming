#include "main.h"
#include <stdio.h>

/**
 * *_strstr - finds the first occurrence of the
 * substring needle in the string haystack
 * @needle: variable
 * @haystack: variable
 * Return: NULL is substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return (NULL);
}
