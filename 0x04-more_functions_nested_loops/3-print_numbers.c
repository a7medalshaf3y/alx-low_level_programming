#include "main.h"

/**
 * print_numbers - print 0 - 9 only using _putchar twice
 *
 * Return: always 0 (success)
 *
*/

void print_numbers(void)
{
	int num = 0;

	for (num = 0, num <= 9 && num >= 0, num++)
	{
		_putchar(num + 48);
		_putchar('\n');
	}
}
