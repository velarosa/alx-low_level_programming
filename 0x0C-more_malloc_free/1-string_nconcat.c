#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: seconf string.
 * @n: some number thing.
 * Description: make s1 + first n bytes of s2 in one string,
 * if n >= length of s2 then use entier string s2.
 *
 * Return: Pointer if Success and NULL if function fails or NULL is passed.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int size1, size2;
	unsigned int i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	s3 = malloc(sizeof(char) * (size1 + n + 1));
		if (s3 == 0)
			return (0);

		for (i = 0; s1[i] != '\0'; i++)
		{
				s3[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			s3[i] = s2[j];
			i++;
		}
		s3[i] = '\0';
		return (s3);
}
