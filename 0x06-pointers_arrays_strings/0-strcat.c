#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointer to destination inpt
 * @src: pointer source input
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2

		c = 0;
	while (dest[c])
		c++;
	for (c = 0; src[c2]; c2++)
	{
		dest[c2] = src[c2];
			c2++;
	}
	return (dest);
}