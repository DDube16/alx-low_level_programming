#include "main.h"

/**
 * _puts_recursion - function prints string on a new line
 * @s: string
 *
 * Return: Success 1
 * error, -1 is returned, and errno is set appropriately
 */
void _puts_recursion(char *s)

{
		if (*s == 0)
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
