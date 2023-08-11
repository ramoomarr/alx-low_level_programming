#include <stdio.h>

/**
 * main - This is the main function.
 *
 * Description: This program prints all the numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	for (int i = 10; i < 16; i++)
	{
		putchar(i + '0');
	}

	for (char i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

