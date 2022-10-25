// Escribir holamundo usando funciones

#include <stdio.h>

void Mundo(); // es pot posar directament tot el poso a sota aquí, es a dir,
              // declarar i donar les ordres, de fet ho faré a les funcions amb
              // valor

int main(int argc, char const *argv[]) {
  Mundo();
  return 0;
}

void Mundo() { printf("Hola Mundo\n"); }
