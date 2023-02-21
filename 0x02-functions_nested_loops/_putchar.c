#include <unistd.h>

/**
* _putchar - writes any character to stdoutput
* @c: The character to print
* Return: On success 1,
* On error, -1 is returned, and errno is set appropriately,
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
