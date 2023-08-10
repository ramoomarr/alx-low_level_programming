#include <unistd.h>

int main(void) {
  char quote[] = "and that piece of art is useful" " - Dora Korpar, 2015-10-19";
  int len = sizeof(quote) - 1;
  int fd = STDERR_FILENO;

  write(fd, quote, len);
  write(fd, "\n", 1);

  return 1;
}

