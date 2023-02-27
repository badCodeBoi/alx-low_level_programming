#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: int a
 * @b: int b
 * Return: swap values
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
