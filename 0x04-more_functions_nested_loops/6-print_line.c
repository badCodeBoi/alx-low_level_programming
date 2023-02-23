#include "main.c"

/**
 * print_line - will draw a straight line in the terminal.
 * @n: if 0 or less, the function should only print \n
 * Return: 0
 */
void print_line(int n)
{
int x;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}
