#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - func sets the value of a given bit to 0
 * @n: parameter
 * @index: index
 *
 * Return: 1 for success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
