#include "main.h"

/**
 * _strstr - Finds the first occurrence of a substring in a string.
 * @haystack: The string to be searched.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of @needle in @haystack,
 *         or NULL if @needle is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}

	return (NULL);
}

