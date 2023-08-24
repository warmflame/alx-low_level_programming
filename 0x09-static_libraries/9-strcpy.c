#include "main.h"

/**
 * _strcpy - Copies the string @src to @dest.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

