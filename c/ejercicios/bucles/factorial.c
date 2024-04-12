// devolver el factorial de un número

#include "stdio.h"

int main(int argc, char *argv[]) {
  int i, num, producto = 1;
  printf("Introduzca el número a sacar el factorial\n");
  scanf("%d", &num);

  for (i = 1; i <= num; i++) {
    producto = producto * i;
  }

  printf("el resultado del factorial es = %i\n", producto);

  return 0;
}
