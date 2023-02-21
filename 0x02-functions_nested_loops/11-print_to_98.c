#include "main.h"
/**
 * void print_to_98 -
 * Return: 0 (Success) \n */
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
