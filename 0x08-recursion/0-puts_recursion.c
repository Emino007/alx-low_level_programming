#include "main.h"
/**
 * _puts_recursion - functions like puts()
 *
 * Return- 0
 */
void_puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		-puts_recursion(s + 1);
	}

		else
			_putchar('\n');
}
