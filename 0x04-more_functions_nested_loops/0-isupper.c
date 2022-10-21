#nclude "main.h"
/**
 * _isupper - entry point
 * @c: checked
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
