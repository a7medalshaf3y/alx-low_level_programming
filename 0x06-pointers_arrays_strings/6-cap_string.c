#include "main.h"
#include <stdio.h>

/**
 * islower - determine whether ascii is lowercase
 *
 * @c: character
 * Return : 1 if true, 0 if false
 */

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */


int isDelimeter(char c)
{
	int i;

	char delimeter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimeter[i])
			return (1);
}

/**
 * cap_string - captalizes all words of a string
 * s: input string
 * Return: string with captalized words
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimeter(*s))
			foundDelimit = 0;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;

		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
