#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    (void)argc; /* unused parameter */

    printf("%s\n", argv[0]);

    return (0);
}

