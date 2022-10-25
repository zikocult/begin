// Conversión de la temperatura de F a C i viceversa
#include <stdio.h>
double Kelvin(float n1);
double Fahrenheit(float n1);

int main(int argc, char *argv[]) {
  int opt;
  float temp;

  do {
    printf("1) Conversión a Fahrenheit\n2) Conversión a Kelvin\n3) Salir\n");
    printf("Opcion: ");
    scanf("%i", &opt);

    switch (opt) {
    case 1:
      printf("Introduzca la temperatura en grados Celsius: ");
      scanf("%f", &temp);
      Fahrenheit(temp);
      printf("La conversión de %.2fC es igual a %.2fF\n\n", temp,
             Fahrenheit(temp));
      break;
    case 2:
      printf("Introduzca la temperatura en grados Celsius: ");
      scanf("%f", &temp);
      Kelvin(temp);
      printf("La conversion de %.2fC es igual a %.2fK\n\n", temp, Kelvin(temp));
      break;
    case 3:
      printf("See you later nen!\n");
      break;
    default:
      break;
    }
  } while (opt != 3);
  return 0;
}

double Fahrenheit(float temp) { return (temp * 1.8) + 32; }
double Kelvin(float temp) { return (temp + 273.15); }
