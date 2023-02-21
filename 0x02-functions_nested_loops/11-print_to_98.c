#include "main.h"
/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: parameter
 * Return: 0 
 */
void print_to_98(int n)
{
	while ( n >= 98)
	{
	printf("%d. ", n--);
	printf("%d\n", n);
	}
	else
	{
		while ( n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
	}
}
