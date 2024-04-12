/*
 * Funcion Recursiva
 * Recursividad: Una funcion que se llama a si misma
 * 1) Caso Base
 * 2) Caso Recursivo
 *
 * a(x){
 *  if (n = 1){
 *  return n
 *  } else {
 *    a(x); // això fa que si n != 1, torna a repetir el procés
 *  }
 * }
 */

#include <stdio.h>

// La meva forma donava bon resultat, però em sembla mes eficient la del profe
// long fact=1;
//
// long factorial (int n) {
//   if (n > 1) {
//     fact = fact * n;
//     n --;
//     factorial(n);
//   } else {
//     return fact;
//   }
// }

long factorial(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return (n * factorial(n - 1));
  }
}

int main(int argc, char *argv[]) {
  int n;

  printf("Escribe un número\n");
  scanf("%i", &n);

  printf("El factorial del número es: %li\n", factorial(n));

  return 0;
}
