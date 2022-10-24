#include <stdio.h>

int main ()
{
    int edad, meses, semanas, dias, horas;

    printf("Introduce tu edad\n");
    scanf("%i", &edad);

    meses = edad * 12;
    semanas = edad * 52;
    dias= semanas * 7;
    horas = dias * 24;

    printf("Tu edad en meses es de %i\n", meses);
    printf("Tu edad en semanas es de %i\n", semanas);
    printf("Tu edad en días es de %i\n", dias);
    printf("Tu edad en horas es %i \nGracias por usar el programa \n", horas);

    return 0;
}