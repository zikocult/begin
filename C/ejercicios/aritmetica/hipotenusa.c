#include <math.h>
#include <stdio.h>


int main()
{
    float cateto1, cateto2, hipotenusa;

    printf("Introduzca el valor de los dos catetos\n");
    scanf("%f %f", &cateto1, &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2)+pow(cateto2, 2));
    printf("El valor de la hipotenusa es %f \n", hipotenusa);

    return 0;
}
