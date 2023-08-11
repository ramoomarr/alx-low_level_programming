#include <stdio.h>

/**
 * main - This is the main function.
 *
 * Description: This program prints all possible different
 *
 * Return: Always 0.
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

