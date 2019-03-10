#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of arguments. Should be one.
 * @argv: array of arguments to the program.
 *
 * Return: 0 is successful. 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int money, coins;
	int change;

	if (argc - 1 != 1)
	{
		printf("Error \n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (1);
	}

	coins = money / 25;
	change = money % 25;
	coins += change / 10;
	change = change % 10;
	coins += change / 5;
	change = change % 5;
	coins += change / 2;
	change = change % 2;
	coins += change;
	printf("%d\n", coins);

	return (0);
}
