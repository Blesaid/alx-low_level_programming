#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = % 10;
	if ((n % 10) > 5)
		printf(""Last digit of" %d "is" %d "and is greater than 5"\n", n, n % 10);
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf(""Last digit of" %d "is" %d "and i less than 6 and
		not 0"\n", n, n % 10);
	else
		printf(""Last digit of" %d "is" %d "and is 0"\n" n, n % 10);
	return (0);
}
