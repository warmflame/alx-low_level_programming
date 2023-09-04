#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: num of arugments
 * argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1) /* equal to 1 because if no number passes, returns 0 */
	{
		printf("0\n");
		return (0);
	}
	for (int i == 1; i < argc; i++)
	{
		int num = 0;
		char *arg = argv[i];
		
		for (int j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return(1);
			}
		}
	}
	
	num = atoi(arg); /* converts arugment into an integer */

	if (num > 0) /* checks if num is positive */
	{
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
