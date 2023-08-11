#include <stdio.h>

/**
 * main - This is the main function.
 *
 * Description: This program prints all single digit
 *
 * Return: Always 0.
 */
int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

