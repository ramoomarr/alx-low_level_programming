#include <stdio.h>

/**
 * main - This is the main function.
 *
 * Description: This program prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
       	char ch;

	/* Declare ch. */
	ch = 'a';

	/* Print the alphabet in lowercase. */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/* Print the alphabet in uppercase. */
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	{
		/* Print a newline. */
	putchar('\n');
	return (0);
}

