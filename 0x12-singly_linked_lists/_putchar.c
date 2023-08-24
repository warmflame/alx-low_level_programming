#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: It's the character that needs to print
 *
 * Return: On success output 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

