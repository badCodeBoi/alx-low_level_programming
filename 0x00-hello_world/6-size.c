#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */

int main(void)
{
char ch;
int in;
long int li;
long long int lli;
float fl;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(in));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));
return (0);
}
