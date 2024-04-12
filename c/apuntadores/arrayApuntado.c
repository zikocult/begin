// Els array sempre es modifiquen per referencia

#include <stdio.h>

void llenar(int array[], int dimension) {

  for (int i = 0; i < dimension; i++) {
    printf("Dame el valor [%d] del array: ", i);
    scanf("%d", &array[i]);
  }
}

int main(int argc, char *argv[]) {
  int miVector[5];
  llenar(miVector, 5);

  // Por defecto los array se pasan con paso de parámetros por referencia

  printf("\n");
  for (int i = 0; i < 5; i++) {
    printf("La posición [%i], con valor: %d\n", i, miVector[i]);
  }

  // Usamos apuntadores para movernos por el array sin conocer su dimension
  // Primero asignamos la posición 0 a un puntero

  int array[5] = {1, 2, 3, 4, 5};

  int *pMiVector = &array[0], i = 0;
  printf("\n");

  //La sentencia While no funciona, haria de mirar com fer-ho bé
  // while (*pMiVector != NULL)
  while (i <= 4) {
    printf("El apuntador es %d, en la posición %p\n", *pMiVector, pMiVector);
    pMiVector++; //indicamos que pase a la siguiente pos de memoria
    i++;
  }

  return 0;
}
