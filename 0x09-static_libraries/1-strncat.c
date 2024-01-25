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


char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';
	return (dest);
}
