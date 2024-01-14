#include "main.h"

/**
 * _strcpy - function  that copies the string pointed to by src.
 * @dest: char type string.
 * @src: char type string.
 * Description: copy the  string pointed to by src to dest.
 *
 * Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
