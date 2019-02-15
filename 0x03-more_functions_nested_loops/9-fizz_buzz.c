#include <stdio.h>

/**
 * main - prints numbers from 1 to 100. For multiples of three prints Fizz.
 * For multiples of five print Buzz. For multiples of both print FizzBuzz.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n != 100)
		{
			if (n % 3 == 0)
				printf("Fizz ");
			else
			{
				if (n % 5 == 0)
					printf("Buzz ");
				else
				{
					if (n % 3 == 0 && n % 5 == 0)
						printf("FizzBuzz ");
					else
						printf("%d ", n);
				}
			}
		}
		else
			printf("Buzz");
	}
	printf("\n");
	return (0);
}
