#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string
 * Return: Success 1
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
