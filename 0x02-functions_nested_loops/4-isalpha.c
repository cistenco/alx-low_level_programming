#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to be checked.
 * Return: 1 and 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
