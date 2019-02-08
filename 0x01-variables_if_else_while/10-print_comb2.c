#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit1;
	char digit2;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = 48; digit2 <= 57; digit2++)
		{
			putchar(digit1);
			putchar(digit2);
			if (digit1 != 57 || digit2 != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
