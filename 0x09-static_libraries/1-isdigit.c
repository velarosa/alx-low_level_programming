#include "main.h"

/**
 * _isdigit - function that checks if input is a digit.
 * @c: the integer that gets checked.
 * Description: is it a number or not.
 *
 * Return: 1 if Success 0 if not.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
