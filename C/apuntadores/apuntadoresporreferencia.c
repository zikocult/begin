#include <stdio.h>
#include <stdlib.h>

void f (int x)
{
  x = 3;
}

void e (int *x)
{
  *x = 3;
}

int main(void)
{
  int a = 10;
  f(a);
  printf("%d\n", a);
  
  e(&a);
  printf("%d\n", a);

  return EXIT_SUCCESS;
}
