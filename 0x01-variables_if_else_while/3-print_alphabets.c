#include <stdio.h>

/**
 * main - program that prints the alphabet in Upper &lowercase
 * Return: 0 (Success)
 */

int main(void)
{
char c;

char d;

c = 'a';
d = 'A';
while (c <= 'z')
{
	putchar(c);
	c++;
}
while (d <= 'z')
{
	putchar(c);
	d++;
}
return (0);
}
