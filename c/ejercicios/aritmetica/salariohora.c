#include <stdio.h>

int main ()
{
    float valor, sueldo;
    int horas;

    printf("Cuantas horas ha trabajado: ");
    scanf("%i", &horas);
    printf("Cuanto se le paga por hora: ");
    scanf("%f", &valor);

    sueldo = horas * valor;
    printf("Su sueldo es de %.2f\n", sueldo);
    
    if (valor < horas) {
      printf("Curras un montón\n");
    };

    return 0;
}
