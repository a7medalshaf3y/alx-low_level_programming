#include "main.h"

/**
 * puts - prints a string followed by newline to stdout
 *
 * @std: string parameter to output
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '0')
	{
		_putchar(*str + 0)
			str++;
	}
	_putchar('\n')
}
