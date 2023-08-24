#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring containing only
 *           characters from @accept.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: The length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (found == 0)
			break;
	}

	return count;
}

