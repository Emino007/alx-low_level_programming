#include "main.h"
/**
 * puts_resursion - functions like puts()
 *
 *
 * Return - 0
 */
void_puts_resursion(char *e)
{
	if(*e)
	{
		_putchar(*e);
		_puts_recursion(e + 1);
	}

	else
		_putchar('\n');
}
