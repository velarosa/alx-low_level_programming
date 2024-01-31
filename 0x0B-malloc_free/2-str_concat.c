#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Description: The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by the contents of s2
 * and null terminated.
 *
 * Return: Pointer to s1 + s2 if Success '\0' if NULL is passed And NULL on
 * failure.
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	int i1 = 0, i2 = 0;

	if (s1 == 0 || s2 == 0)
	{
		return ('\0');
	}

	for (; s1[size1] != '\0'; size1++)
	{
		;
	}

	for (; s2[size2] != '\0'; size2++)
	{
		;
	}

	char *s3 = malloc((sizeof(char) * (size1 + size2) + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; i1 < size1; i1++)
			s3[i1] = s1[i1];

		for (; i2 < size2; i2++, i1++)
			s3[i1] = s2[i2];
	}
	s3[i1] = '\0';

	return (s3);
}
