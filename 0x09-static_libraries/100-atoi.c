#include "main.h"

/**
 * _atoi - Function that convert a string to an integer.
 * @s: The sring to be converted.
 * Description: Function that convert a string to an integer.
 *
 * Return: Always (sign * result) Success.
*/

int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign = sign * -1;
		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + *s - '0';
		else if (result > 0)
			break;
	} while (s++);
	return (sign * result);
}
