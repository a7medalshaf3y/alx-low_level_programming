#include "main.h"

/**
 * print-sign - print + if greater than zero
 * 0 if n is zero - if n less than zero
 *
 * @n: takes integer type for function
 *
 * Return: 1 if +, 0 if 0, -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
