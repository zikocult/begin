#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
  int top, mid, count, i;

  if (argc == 2) {
    mid = atoi(argv[1]);
    top = (mid * 2) - 1;
    count = 0;

    if (mid < 0) {
      mid *= -1;
    }

    while (count < mid) {
      i = 1;
      while (i <= top) {
        if ((i < mid - count) || (i > mid + count)) {
          printf(" ");
        } else {
          printf("*");
        }
        i++;
      }
      printf("\n");
      count++;
    }

    count = count - 2;

    while (count >= 0) {
      i = 1;
      while (i <= top) {
        if ((i < mid - count) || (i > mid + count)) {
          printf(" ");
        } else {
          printf("*");
        }
        i++;
      }
      printf("\n");
      count--;
    }
  } else {
    printf("Cantidad de parámetros introducidos inválidos\n");
  }
  return 0;
}
