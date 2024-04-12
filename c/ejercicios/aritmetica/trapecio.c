
#include <stdio.h>

int main ()
{
    float base1, base2, altura, area;

    printf ("Introduzca la base 1: ");
    scanf("%f", &base1);
    printf ("Introduzca la base 2: ");
    scanf("%f", &base2);
    printf ("Introduzca la altura: ");
    scanf("%f", &altura);

    area = (((base1+base2)/2)*altura);
    printf ("El area del trapecio es igual a %.3f \n", area);

    return 0;
}