#include "main.h"
#include <stdio.h>
/**
 * *_memset - n fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 * Returns a pointer to the memory area s
 * @b: const byte
 * @s: pointer
 * @n: amount of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)

s[i] = b;
return (s);

}
