#include "main.h"

/**
 * _isalpha - Checks for alphabetic char
 * @c: is char to be checked
 * Return: 1 if char is upper or lowercase otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

