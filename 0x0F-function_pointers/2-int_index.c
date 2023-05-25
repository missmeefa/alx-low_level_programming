#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @arr: array
 * @sz: size of elements in array
 * @pm: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *arr, int sz, int (*pm)(int))
{
	int i;

	if (arr == NULL || sz <= 0 || pm == NULL)
		return (-1);

	for (i = 0; i < sz; i++)
	{
		if (pm(arr[i]))
			return (i);
	}
	return (-1);
}
