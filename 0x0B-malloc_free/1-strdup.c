#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: the given string.
 * Description: Makes a pointer to a new copy of given str.
 *
 * Return: On Success: Pointer to duplicate string
 * and NULL if str = 0 or insufficient memory was available.
 */

char *_strdup(char *str)
{
	int size = 0, i = 0; /* size for size of str & i for str[i] = new str[i]*/

	if (str == 0) /* if given string is null */
	{
		return (NULL);
	}

	/* storing the size of given string in int size  */
	for (; str[size] != '\0'; size++)
	{
		;
	}

	/* making the new alocated string == to given string + 1 is \0*/
	char *nstr = malloc(sizeof(*str) * size + 1);

	if (nstr == 0) /* if insufficient memory */
	{
		return (NULL);
	}

	else /* if not null then copies str to new str :) */
	{
		for (; i < size; i++)
		{
			nstr[i] = str[i];
		}
	}
	return (nstr);
}
