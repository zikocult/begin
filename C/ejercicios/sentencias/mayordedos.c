#include <stdio.h>

int main (int argc, char *argv[])
{
  int num1, num2;
  printf("Escribe dos números\n");
  scanf("%i %i", &num1, &num2);

  if (num1 < num2) {
    printf("%i es menor que %i\n", num1, num2);
  } else if (num1 > num2) {
    printf("%i es mayor que %i\n", num1, num2);
  } else {
    printf("%i es igual que %i\n", num1, num2);
  }

  return 0;
}
