#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: integer
 * @argv: string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (y = 0; y < 5 && x >= 0; y++)
	{
		while (x >= coins[y])
		{
			x -= coins[y];
			z++;
		}
	}
	printf("%d\n", z);
	return (0);
}
