#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: function pointer
 * Return: 0 on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
