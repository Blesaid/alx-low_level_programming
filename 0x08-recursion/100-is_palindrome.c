#include "main.h"
/**
 * _strlen_recursion - find the length
 * @s: string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s != 0)
	{
		l++;
		return (l + _strlen_recursion(s + 1));
	}
	return (1);
}

/**
 * check - actual check
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome
 */
int check(char *s, int l)
{
	if (l <= 1)
		return (1);
	if (*s != s[l - 1])
		return (0);
	else
		return (check((s + 1), (l - 2)));
}
/**
 * is_palindrome - check
 * @s: string
 * Return: 1 if palindrome
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);
	return (check(s, l));
}
