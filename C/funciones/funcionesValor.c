#include <stdio.h>

int Sumar(int n1, int n2) { // n1 i n2 son dos noves variables que declaro dins de la funció
  int sumainterna = 0;
  sumainterna = n1 + n2;
  return sumainterna;
}

int Suma = 0, a, b;

int main(int argc, char const *argv[]) {
  printf("Escriba dos números a sumar\n");
  scanf("%i %i", &a, &b);

  Suma = Sumar(a, b); // a i b inicialitzen n1 i n2
  printf("La suma es %i \n", Suma);

  return 0;
}
