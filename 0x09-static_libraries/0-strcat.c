#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append characters from src to dest */
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	/* Null-terminate the resulting string */
	dest[dest_len] = '\0';

	return (dest);
}

