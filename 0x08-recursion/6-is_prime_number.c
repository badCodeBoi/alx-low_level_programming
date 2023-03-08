#include "main.h"
#include <stdio.h>

/**
 * chck - loop that creates the recursion
 * @n: number from argument
 * @i: number of loops
 * Return:  0 or 1 (success).
 */

int chck(int n, int i)
{
if (i == n -1)
{
return(1);
}
else if (n % i == 0)
{
return(0);
}
if (n % i != 0)
{
return(chck(n, i + 1));
}
return(0);
}

/**
 * is_prime_number - prints if the input integer
 * is a prime number using the digits 1 and 0.
 * @n: number to be checked for prime num
 * Return: if not a prime num 0, 1 (success).
 */
int is_prime_number(int n)
{
int i;

i = 2;

if (n < 2)
{
return(0);
}
if (n == 2)
{
return(1);
}
return (chck(n, i));
}
