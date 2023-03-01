#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings
 * @src: string to append
 * @dest: pointer to the resulting string
 * @n: numbers of bytes needed from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
{
dest_len++;
}
for (index = 0; src[index] && index < n; index++)
{
dest[dest_len++] = src[index];
}
return (dest);
}
