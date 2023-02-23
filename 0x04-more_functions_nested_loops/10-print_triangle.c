#include "main.h"

/**
 * print_triangle - prints triangles of squares
 * @size: size of triangles
 * Return: non
 */

void print_triangle(int size)
{
int x,y,a;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = size - x; y > 1; y--)
{
_putchar(32);
}
for (a = 0;a <= x; a++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
