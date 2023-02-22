#include "main.h"

/**
 * print_alphabet_x10 - will print ten times
 * Return: 0 Success
 */
void print_alphabet_x10(void)
{

	int ten;
	char la;

	for (ten = 1; ten <= 10; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}
		_putchar('\n');
	}
}
