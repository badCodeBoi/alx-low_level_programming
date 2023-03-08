#include "main.h"
#include <stdio.h>

/**
 * strLen - length size of input string
 * @s: pointer to memory location
 * Return: loop
 */
int strLen(char *s)
{
if (!*s)
{
return(0);
}
return(1 + strLen(++s));
}

/**
 * pal - palindrome
 * @s: pointer to memory location
 * @1: if string is a palindrome
 * Return: 0
 */
int pal(char *s, int 1)
{
if (1 < 1)
{
return(1);
}
if (*s == *(s + 1))
{
return(pal(s + 1, l - 2));
}
return(0);
}
/**
 * is_palindrome - checks if string is a palindrome or not
 * @s: pointer to memory location
 * Return: 1 (success).
 */
int is_palindrome(char *s)
{
int len = strLen(s);
return(pal(s, len - 1));
}
