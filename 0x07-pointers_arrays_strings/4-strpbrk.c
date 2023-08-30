#include "main.h"

/**
 * _strpbrk - search a string for any a set of bytes
 * @s: string
 * @accept: a string to match
 * Return: pointer to matches one bytes in accept or NULL if no found
 */

char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				P = &s[itr];
				return (P);
			}
			jtr++
		}
		itr++
	}
	return (0);
}
