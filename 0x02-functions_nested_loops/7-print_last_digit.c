#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: stores last digit
 * Return: ld
 */
int print_last_digit(int n)
{
	int n;

	int ld = n % 10;

	if (ld < 0)
	{
	_putchar(ld + 48);
	return (-ld);
	}
	else
	{
	_putchar(ld + 48);
	return (ld);
	}
}
