#include "main.h"

/**
 * _strncpy - Function that copies a string.
 * @dest: char string.
 * @src: char string.
 * @n: number of chars.
 * Desvription: The function copies the string pointed to by src,
 * including the terminating null byte ('\0'),
 *  to the buffer pointed to by dest.
 *
 * Return: Always (dest) Sucess.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	dest[i] = '\0';
	i++;

	return (dest);
}
