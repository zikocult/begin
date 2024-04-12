/*
 * Escribe un programa para trabajar sobre un arreglo de 10 elementos en el cual
 * se soliciten los valores de dicho arreglo y posteriormente se puedan hacer
 * las siguientes operaciones
 *
 * 1) Ingresar o modificar los elementos del arreglo
 * 2) Mostrar la Suma de los elementos
 * 3) Realizar la multiplicación de los elementos
 * 4) Realizar la suma solo de los elementos divisibles entre 3
 * 5) muultiplicar por 3 cada elemento del arreglo
 *
 * El usuario seleccionará la opción de su preferencia y el programa mostrará
 * los datos del arreglo original y el resultado de la opción seleccionada
 *
 * El programa debe realizarse en un menu que debe ejecutarse hasta que el
 * usuario decida salir
 */

#include <stdio.h>
void iniciarArray(int array[]);
void mostrarArray(int array[]);
void sumaArray(int array[]);
void multipArray(int array[]);
void sumsiTres(int array[]);
void multporTresArray(int array[]);

int main() {
  int array[10], opcion, salir = 0;

  for (int i = 0; i < 10; i++) {
    array[i] = i;
  }

  while (salir == 0) {
    printf("---------------------------------------------------------------\n");
    printf("Selecciones la opción que desee\n1) Ingresar elementos del "
           "array\n2) Mostrar la suma de los elementos\n3) Realizar la "
           "multiplicación de los elementos\n4) Realizar la suma sólo de los "
           "elementos divisibles por 3\n5) Multiplicar por 3 cada elemento del "
           "array\n0) Salir\nOpción escogida: ");
    scanf("%i", &opcion);

    switch (opcion) {
    case 1:
      printf("Modificar los elementos del array\n");
      iniciarArray(array);
      mostrarArray(array);
      break;
    case 2:
      sumaArray(array);
      mostrarArray(array);
      break;
    case 3:
      multipArray(array);
      mostrarArray(array);
      break;
    case 4:
      sumsiTres(array);
      mostrarArray(array);
      break;
    case 5:
      multporTresArray(array);
      mostrarArray(array);
      break;
    case 0:
      salir = 1;
      break;
    default:
      printf("Opción no valida\n");
      break;
    }
  }

  return 0;
}

void sumaArray(int array[]) {
  int suma = 0;
  for (int i = 0; i < 10; i++) {
    suma = array[i] + suma;
  }
  printf("\nLa suma es = %i\n", suma);
}

void mostrarArray(int array[]) {
  printf("Estos son los datos del array: ");
  for (int i = 0; i < 9; i++) {
    printf("%i ,", array[i]);
  }
  printf("%i\n", array[9]);
}

void iniciarArray(int array[]) {
  for (int i = 0; i < 10; i++) {
    printf("Ingrese dato posición [%i]: ", i + 1);
    scanf("%i", &array[i]);
  }
}

void multipArray(int array[]) {
  int multi = 1;
  for (int i = 0; i < 10; i++) {
    multi = array[i] * multi;
  }
  printf("\nLa multiplicación es = %i\n", multi);
}

void sumsiTres(int array[]) {
  int sumtres = 0;
  for (int i = 0; i < 10; i++) {
    if (array[i] % 3 == 0) {
      sumtres = array[i] + sumtres;
    }
  }
  printf("\nLa suma es de los divisbles entre 3 = %i\n", sumtres);
}

void multporTresArray(int array[]) {
  printf("Multiplicado por tres todo el Array\n");
  for (int i = 0; i < 10; i++) {
    array[i] = array[i] * 3;
  }
}
