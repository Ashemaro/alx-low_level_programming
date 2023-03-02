#include "main.h"
#include <stdio.h>

/**
 * *_strncat - function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest.
 * Uses at most n bytes from src and src does not need to be
 * null-terminated.
 * @n: input value
 * @dest: is an input value
 * @src: is an input value
 * Return: Return a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
