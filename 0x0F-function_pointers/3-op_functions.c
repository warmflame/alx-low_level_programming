#include "3-calc.h"
/**
 * op_add - adding two numbers
 * @a: first input
 * @b: second input
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracting two numbers
 * @a: first input
 * @b: second input
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates multiplication of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

