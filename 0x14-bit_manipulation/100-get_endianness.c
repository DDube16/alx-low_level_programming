#include "main.h"

/**
 * get_endianness - function checks if a machine is little or big endian
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)

{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
