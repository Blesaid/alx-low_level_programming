#include <stdio>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long p = 612852475143;
	int x;

	while (x++ < p / 2)
	{
		if (p % x == 0)
		{
			p /= 2;
			continue;
		}
		for (x = 3; x < p / 2; x += 2)
		{
			if (p % x == 0)
				p /= x;
		}
	}
	printf("%1d\n", p);
	return (0);
}
