#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 * Return: Success 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
