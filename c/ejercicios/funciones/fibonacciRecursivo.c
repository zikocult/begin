#include <stdio.h>

int Fibonacci(int n);

int main() {

  int numero, i;

  printf("Escriba el número de elementos de la serie: ");
  scanf("%d", &numero);

  for (i = 1; i <= numero; i++) {
    printf("%i\n", Fibonacci(i));
  }
  return 0;
}

int Fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  } else {
    return (Fibonacci(n - 1) + Fibonacci(n - 2));
    // Es tracta de pensar com si fos un array i estiguessis cridant les
    // posicions n-1 no es refereix a la variable -1 si no a una posició menor
    // 1 1 2 3 5 --> així si entra n com a 5, sumarà les posicions 4 i 3, (2+3)
    // el primer if es per no fer calculs amb 0 ni 1, doncs no tenen posicions
    // atrassades
  }
}
