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
	int x, y, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
