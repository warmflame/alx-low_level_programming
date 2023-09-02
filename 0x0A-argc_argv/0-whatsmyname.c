#include "main.h"
#include <stdio.h>

/**
 * main -  prints program that prints name
 * @argc: number of arguments 
 * @argv: array of string containing the argument 
 *
 * Return: 0
int main(int argc __attribute__((unused)), char *argv[]) 
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}

