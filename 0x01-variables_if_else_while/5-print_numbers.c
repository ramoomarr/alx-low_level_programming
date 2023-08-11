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
	int i;

	/* Declare i. */
	i = 0;

	/* Print all single digit numbers of base 10. */
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}

