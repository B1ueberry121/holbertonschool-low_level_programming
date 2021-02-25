#include "holberton.h"

/**
 * _strlen_recursion - finds the lengthvof the string
 * @s: string length
 * Return: result of the length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * pal_check - checks if its a palindrome
 * @ch: string
 * @st: strat of the string
 * @end: end of the string
 * Return: the result
 */

int pal_check(char *ch, int st, int end)
{
	if (ch[st] == ch[end])
	{
		if (st == end || st == end + 1)
		{
			return (1);
		}
		return (pal_check(ch, st + 1, end - 1) + 0);
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if its a palindrome
 * @s: string
 * Return: the result
 */

int is_palindrome(char *s)
{
	int len;

	if (s == '\0')
	{
		return (1);
	}
	len = _strlen_recursion(s);

	return (pal_check(s, 0, len - 1));
}
