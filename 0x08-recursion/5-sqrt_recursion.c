#include "main.h"
#include <stdio.h>

/**
 * _check_agr - evaluate passed arguments
 * @i: integer argument
 * @n: integer argument
 * Return: void
 */

int _check_agr(int i, int n)
{
if (n == 0 || n == 1)
return (n);

else if (i * i < n)
return (_check_agr(i + 1, n));

else if (i * i == n)
return (i);
return (-1);
return (-1);
}
/**
 * _sqrt_recursion - prints the natural square root of a number
 * @n: pointer to memory
 * Return: -1 if number has no root number.
 */
int _sqrt_recursion(int n)
{
int i = 0;

if (i < 0)
return (-1);
else
return (_check_agr(i, n));
}
