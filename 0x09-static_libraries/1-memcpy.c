#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copies memory area
 * @dest: the destination address of memory
 * @src: the source
 * @n: variable
 * Return: Pointer to dest variable.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
	dest[i] = src[i];
return (dest);
}
