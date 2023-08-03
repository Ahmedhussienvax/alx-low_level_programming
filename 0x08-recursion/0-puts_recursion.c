#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: string
 * return void
 */
void _puts_recursions(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
	else
	{
		_putchar('\n');
	}

}
