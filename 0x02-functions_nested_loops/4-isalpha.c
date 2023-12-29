#include "main.h"

/**
 * _isalpha - checkes if charachters is alphabetic or not.
 * @c: the charachter that gets checked.
 * Description: uses th ASCII table to see if @c is within alphbet..
 *
 * Return: 1 if Success 0 in not
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
}
