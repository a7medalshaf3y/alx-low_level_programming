#include "main.h"

/*
* puts2 - prints every character of string
*
* @str: string input
*
* Return: nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n')
}
