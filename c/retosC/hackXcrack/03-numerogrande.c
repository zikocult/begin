#include <limits.h>
#include <stdio.h>

// He tingut que fer un Atoi personalitzat, doncs l'Atoi normal, torna 0 si es
// supera INT_MIN y 1 si es supera INT_MAX, donant problemes amb numeracions que
// superen.
// El que he fet es que retorni INT_MAX e INT_MIN en cas dels límit.

int ft_atoi(const char *nptr) {
  int       positive;
  int       i;
  long long number;

  positive = 1;
  i = 0;
  number = 0;
  while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\f' ||
         nptr[i] == '\r' || nptr[i] == '\n' || nptr[i] == '\v')
    i++;
  if (nptr[i] == '+' || nptr[i] == '-') {
    if (nptr[i] == '-')
      positive = -1;
    i++;
  }
  while (nptr[i] >= '0' && nptr[i] <= '9') {
    number = number * 10 + (nptr[i] - '0');
    i++;
  }
  if (number * positive >= INT_MAX)
    return (INT_MAX);
  else if (number * positive <= INT_MIN)
    return (INT_MIN);
  return ((int)(positive * number));
}

int main(int argc, char *argv[]) {
  int max;

  max = INT_MIN;
  if (argc > 1) {
    for (int i = 1; i < argc; i++) {
      if (max < ft_atoi(argv[i])) {
        max = ft_atoi(argv[i]);
      }
    }
  }
  printf("\n");
  if (max == INT_MAX) {
    printf("Se ha superado o igualado el límite de los enteros\n");
    printf("El mayor número posible es = %d\n", max);
  } else if (max == INT_MIN) {
    printf("No se ha superado el mínimo de los enteros\n");
    printf("El menor número posible es = %d\n", max);
  } else
    printf("El numero mas alto introducido es = %d\n", max);
  return (0);
}
