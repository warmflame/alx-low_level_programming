#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pinter to the array.
 * @size: number of elements in the arry.
 * @cmp: pointer to the comparison function.
 *
 * Return: index of the first element for which cmp function does not return 0, 
 *         or -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}


