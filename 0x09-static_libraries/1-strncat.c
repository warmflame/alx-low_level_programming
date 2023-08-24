#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most @n bytes from @src.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to append.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append characters from src to dest */
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[dest_len++] = src[i];

	/* Null-terminate the resulting string */
	dest[dest_len] = '\0';

	return (dest);
}

