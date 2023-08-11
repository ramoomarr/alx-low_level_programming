#include <stdio.h>

/**
 * main - This is the main function.
 *
 * Description: This program prints the lowercase alphabet
 *
 * Return: Always 0.
 */
int main(void)
{
	for (char i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

