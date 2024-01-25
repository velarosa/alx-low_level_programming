#include "main.h"

/**
 * _isupper - function that checks if a charechter is uppercase.
 * @c: the charecter that's checked
 * Description: is is uppercase or not?
 *
 * Return: 1 if Success 0 if not.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
