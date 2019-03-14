#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[])
{
	int (*p)(int argc, char argv[]);

	p = &main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
