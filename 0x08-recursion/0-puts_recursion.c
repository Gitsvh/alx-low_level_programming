#include "main.h"

/**
 * _puts-recursion - prints a string fllowed by a new line
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s)
			_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
