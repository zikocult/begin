#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_valida(int i) {
  if (i < 10) {
    ft_putchar(i + '0');
  } else if (i >= 10) {
    ft_putchar((i / 10) + '0');
    ft_putchar((i % 10) + '0');
  }
}

int main(void) {
  int i;

  i = 1;
  while (i <= 100) {
    if (i % 3 == 0 && i % 5 == 0)
      write(1, "fizzbuzz", 8);
    if (i % 5 != 0 && i % 3 == 0)
      write(1, "buzz", 4);
    if (i % 5 == 0 && i % 3 != 0)
      write(1, "fizz", 4);
    if (i % 5 != 0 && i % 3 != 0) {
      ft_valida(i);
    }
    write(1, "\n", 1);
    i++;
  }
  return 0;
}
