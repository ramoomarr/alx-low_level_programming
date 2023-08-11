#include <stdio.h>

/**
 * main - This is the main function.
 *
 * Description: This program prints the alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	/* Declare ch. */
	ch = 'a';

	/* Print the alphabet in lowercase, except for q and e. */
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
				{
					putchar(ch);
				}
		ch++;
	}

	putchar('\n');

	return  (0);
}

