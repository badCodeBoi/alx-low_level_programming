#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: 0 if equal
 */
void reverse_array(int *a, int n)
{
int tmp;
int index;
for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}

}
