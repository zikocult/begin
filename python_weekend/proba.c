#include <stdio.h>

int main() {
	int i = 0, a = 0, b = 1, auxiliar, repes;
  
	printf("Introduzca número de repeticiones: ");
  	scanf("%i", &repes);

  	while (i < repes) {
    	printf("%i ", a);
    	auxiliar = b;
    	b = a + b;
    	a = auxiliar;
    	i++;
  	}
  	printf("\n");
  	return (0);
}
