#include "main.h"
#include <stdio.h>
/**
 * main - prints the num of args passed into the program
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*the void function ignores argv*/
	printf("%d\n", argc - 1);

	return (0);
}

