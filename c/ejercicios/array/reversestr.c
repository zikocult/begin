// realice un programa que permita leer una cadena de caracteres y que deuelva
// el número de caracteres que tiene dicha cadena e imprima dicha cadena al
// revés

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char str[20];
  int i = 0;

  printf("Introduzca la cadena a resolver: ");
  fgets(str, 20, stdin);
  strtok(str, "\n");

  // Esta es la manera easy
  // i = strlen(str);
  // printf("La cadena invertida es %s\n", strrev(str));
  // printf("La cadena tiene %i caracteres\n", i);

  while (str[i] != '\0') {
    i++;
  }
  printf("La longitud de la cadena es de %i\n", i);

  while (i >= 0) { // version aprofitem que hem contat a dalt
    printf("%c", str[i]);
    i--;
  }
  printf("\n");

  // La clau es el caràcter '\0' que limita el final gracies a strtok que ha
  // convertit '\n' en '\0'
  // Tot i això, es mes senzill amb les funcions de dalt

  return 0;
}
