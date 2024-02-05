#include "main.h"

/**
 * last_index - return the last index of a string.
 * @s: pointr to the string.
 * Description: return the last index of a string.
 *
 * Return: Alwyas (n) Success.
 */

int is_palindrome(char *s);
int check(char *s; int start
		int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n = n + last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - function that checkes if a string is palindrom.
 * @s: the string.
 * Description: check if the string is palindrom.
 *
 * Return: 1 if palindrom & 0 if not.
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - palindrom checker.
 * @s: the string.
 * @start: int from last to first.
 * @end: int from first to last.
 * @mod: module int.
 * Description: palindrom checker.
 *
 * Return: 1 if palindrom & 0 if not.
 */

int check(char *s, int start, int end, int mod)
{
	if (((start == end && mod != 0)) || ((start == end + 1 && mod == 0)))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
