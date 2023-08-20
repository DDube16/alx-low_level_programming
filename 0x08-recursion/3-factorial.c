#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: integer
 *
 * Return: On success 1.
 * error, -1 is returned , errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
