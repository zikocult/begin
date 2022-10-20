#include <stdio.h>
#include <unistd.h> // Es para la función sleep, para windows es la librería <windows.h>

int main(int argc, char *argv[]) {

  int i = 5;

  while (i >= 0) {
    printf("Cuenta atrás con delay de un segundo con el bucle WHILE %i\n", i);
    i--; // Això es igual que "i = i -1;" o "i -= 1"
         // sleep(1);
  }

  for (i = 5; i >= 0; i--) { // (inicialització, condició, increment)
    printf("Cuenta atrás con delay de un segundo y bucle FOR %i\n", i);
    // sleep(1);
  }

  i = 5;

  do { // En aquest cas sempre farà el primer loop, quan la condició es
       // compleixi sortirà
    printf("Cuenta atrás con delay de un segundo y bucle DO ... WHILE %i\n", i);
    i--;
    // sleep(1);
  } while (i >= 0);

  // Continue sirve para terminar una iteración y saltar a la siguiente
  // break no sólo termina la iteración si no que termina el ciclo completo.

  int salta;
  // printf("Esciba el número que vamos a ignorar\n");
  // scanf("%i", &salta);
  salta = 3; // lo asigno yo para simplificar, es sólo un ejemplo

  for (i = 0; i <= 5; i++) {
    if (i == salta) {
      continue;
    }
    printf("Vamos a ver como se salta el número 3 a causa del CONTINUE: %i\n",
           i);
    sleep(1);
  }

  for (i = 0; i <= 5; i++) {
    if (i == salta) {
      break;
    }
    printf("Vamos a ver como la ejecución acaba antes del 3 a causa del BREAK: "
           "%i\n",
           i);
    sleep(1);
  }

  return 0;
}
