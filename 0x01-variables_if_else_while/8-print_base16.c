#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 *Return: 0 (Success)
 */

int main(void)
{
char c;

char d;

c = 'a';
d = 0;
while (d < 10)
{
	putchar(d + '0');
	d++;
}
while
	(c <= 'f')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}