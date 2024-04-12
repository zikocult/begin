// 1 - Include th stdarg.h
// 2 - function(int fixedparam, ...)
// Los tres puntos indican que pueden entrar varios parametros
// 3 - Define a va_list variable
// 4 - begin and end the argu list with va_start and va_end
//
// Add (3, 1, 2, 3) --> indica que entrará tres variables y las variables en si

#include <stdarg.h>
#include <stdio.h>
#include <string.h> // per strlen accelerem

int max(int num, ...);
void print(char *placeholders, ...);

int main(void) {

  int result = max(4, 10, 18, 14, 16);
  printf("max = %d\n", result);

  print("ddfd", 4, 2, 10.5, 3);
  print("fdfdf", 1.1, 0, 2.2, 5, 3.2);

  return (0);
}

int max(int num_args, ...) {
  va_list args;

  va_start(args, num_args);

  int max = 0;
  for (int i = 0; i < num_args; ++i) {
    int x = va_arg(args, int);
    if (i == 0)
      max = x;
    else if (x > max)
      max = x;
    // printf("x: %d\n", x);
  }
  va_end(args);

  return max;
}

void print(char *placeholders, ...) {
  int num_args = strlen(placeholders);

  va_list args;
  va_start(args, placeholders);
  for (int i = 0; i < num_args; i++) {
    if (placeholders[i] == 'd') {
      int x = va_arg(args, int);
      printf("%d\n", x);
    } else if (placeholders[i] == 'f') {
      double y = va_arg(args, double);
      printf("%f\n", y);
    }
  }

  va_end(args);
}
