#include "main.h"

/**
 * _strncpy - a function that copies string
 *
 * @dest: a pointer to destination input buffer
 * @src: pointer to input buffer
 * @n: byter of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
