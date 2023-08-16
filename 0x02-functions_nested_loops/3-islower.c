#include "main.h"

/**
 * _islower - function to check if
 *		charachter lowercase
 * @c: checks input of function
 * Return: returns 1 if 'c' is lowercase
 *		otherwise 0
*/

int _islower(int c);
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
