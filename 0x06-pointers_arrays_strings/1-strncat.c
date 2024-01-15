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
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && src[j] != n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
