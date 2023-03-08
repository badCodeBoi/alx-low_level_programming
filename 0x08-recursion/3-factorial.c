#include "main.h"
#include <stdio.h>

/**
 * factorial - prints the factorial of a given number
 * @n: pointer to memory holding number
 * Return: -1 if lower then 0
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
