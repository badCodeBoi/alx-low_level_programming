#include <main.h>
#include <unistd.h>

/**
* putchar - writes any character to stdoutput(terminal)
* Return: 1 (success) 
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}