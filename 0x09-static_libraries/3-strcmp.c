#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: char string.
 * @s2: char string.
 * Description: The  strcmp()  function  compares  the two strings s1 and s2.
 * It returns an integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match,
 * or be greater than s2.
 *
 * Return: Always (e) Sucess.
*/

int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int) *s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (e);
}
