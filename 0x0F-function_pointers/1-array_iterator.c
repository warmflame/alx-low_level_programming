#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function executes a function given as a parameter
 * on each element of an array.
 * @array: is an array of elements that function will iterate on
 * @size: size of the array
 * @action: pointer to the function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

