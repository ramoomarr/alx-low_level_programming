#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the main function.
 *
 * Description: This program prints the last digit of a random number.
 * 
 * Return: Always 0.
*/
int main(void)
{
	int n;

	int last_digit;

	srand(time(NULL));

	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
