#include "main.h"
/**
 * _atoi - entry point
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int y = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			x *= -1;
		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			t = t * 10 + *s - '0';
		}

		else if (null_flag)
			break;
		s++;
	}
	if (x < 0)
		t = (-t);

	return (t);
}
