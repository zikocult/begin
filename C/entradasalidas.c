#include <stdio.h>

// El exercici Aries es molt bon exemple de tractament de Strings
int main (){

    // SALIDAS 

    int hola = 1;

    printf("2 menos 1 es igual a %i\n", hola);

    int q = 12;
    float w = 44.232;
    char e = 'A';

    printf ("%i %.3f %c\n", q,w,e);

    // ENTRADAS
    if (q < w) {
      printf("Esto mola\n");
    }

    char z[40];
    printf("\nEscribe tu nombre\n");
    fgets(z, 40, stdin); // Per agafar strings amb espais
    printf("El valor que escribiste es %s\n", z);

    printf("Escribe el valor de la variable a (int)\n");
    scanf("%i",&q);
    printf("El valor que escribiste es %i\n", q);

    printf("Escribe el valor de la variable flotante\n");
    scanf("%f", &w);
    printf("El valor que escribiste es %.3f\n", w);

    return 0;
}
