#include "main.h"

/**
 * *_memcpy - copies memory
 *
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 * Return: pointer *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
