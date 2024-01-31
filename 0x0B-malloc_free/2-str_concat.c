#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: given string
 * Description: find length of a string
 *
 * Return: Always (size) Success.
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

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
	int size1, size2;
	int i;
	char *s3;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	s3 = malloc((size1 + size2) * sizeof(char) + 1);
	if (s3 == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - size1];
	}
	s3[i] = '\0';
	return (s3);
}
