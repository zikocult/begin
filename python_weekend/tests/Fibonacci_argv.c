#include <stdio.h>
#include <stdlib.h>

void fibo(int repes)
{
  long a = 0, b = 1, auxiliar;
  int i = 0;

  while (i < repes)
  {
    printf("%i - %li\n", i, a);
    auxiliar = b;
    b = a + b;
    a = auxiliar;
    i++;
  }
  printf("\n");
}

int main(int argc, char **argv)
{

  if (argc == 2)
  {
    fibo(atoi(argv[1]));
  }
  else if (argc < 2)
  {
    printf("Sin parámetros introducidos\n");
  }
  else
  {
    printf("Se recoge el primer parámetro y se desechan el resto\n\n");
    fibo(atoi(argv[1]));
  }
  return (0);
}
