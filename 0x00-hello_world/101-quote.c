#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 (error).
*/

int main(void)
{
  char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  
  int len = sizeof(quote) - 1;
  int fd = STDERR_FILENO;
  write(fd, quote, len);
  write(fd, "\n", 1);
  return 1;
}
