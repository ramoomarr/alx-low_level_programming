/*
 * Description: This program prints the last digit of a random number and a condition based on its value.
 * Author: Bard
 * Date: 2023-08-11
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the main function.
 *
 * Return: Always 0.
 */
int main(void) {
  int n;
  int last_digit;

  /* Seed the random number generator. */
  srand(time(NULL));

  /* Generate a random number. */
  n = rand() - RAND_MAX / 2;

  /* Calculate the last digit of the random number. */
  last_digit = n % 10;

  /* Check the value of the last digit and print out a condition accordingly. */
  if (last_digit > 5) {
    printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
  } else if (last_digit == 0) {
    printf("Last digit of %d is %d and is 0\n", n, last_digit);
  } else {
    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
  }

  return 0;
}

