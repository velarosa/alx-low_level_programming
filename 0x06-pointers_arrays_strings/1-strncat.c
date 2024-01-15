#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: char string.
 * @src: char string.
 * @n: number of chars.
 * Desvription: Concatenate src to dest useing at most n bytes.
 * src dose not need to be null terminated.
 *
 * Return: Always (dest) Sucess.
*/


char *_strncat(char *dest, const char *src, int n);
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		if (j == n)
			break;
	}
	dest[i] = '\0';
	return (dest);
}
