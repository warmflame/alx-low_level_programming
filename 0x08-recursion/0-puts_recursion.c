#include "main.h"
/**
 * _puts_recursion - this is a function that acts like puts();
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s)
		_puts_recursions(s + 1);
	}

	else
		_putchar('/n')
}

