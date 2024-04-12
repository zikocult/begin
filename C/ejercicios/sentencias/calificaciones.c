/*Decirle al alumno en base de sus calificaciones
9-10 Excelente
7-8 Notable
6 Bien
5 Suficiente
3-4 insuficinte
0-2 Deficiente
*/

#include <stdio.h>

int main ()
{
  int nota;
  printf("Escribe tu nota\n");
  scanf("%i", &nota);

  // switch (nota) {
  //   case 10: printf("Tu nota es de excelente\n");
  //            break;
  //   case 9: printf("Tu nota es de excelente\n"); 
  //           break;
  //   case 8: printf("Tu nota es de notable\n");
  //           break;
  //   case 7: printf("Tu nota es de notable\n");
  //           break;
  //   case 6: printf("Tu nota es de bien\n");
  //           break;
  //   case 5: printf("Tu nota es de suficiente\n");
  //           break;
  //   case 4: printf("Tu nota es de insuficinente\n");
  //           break;
  //   case 3: printf("Tu nota es de insuficinente\n");
  //           break;
  //   case 2: printf("Tu nota es de insuficinente\n");
  //           break; 
  //   case 1: printf("Tu nota es de deficiente\n");
  //           break;
  //   case 0: printf("Tu nota es de deficiente\n");
  //           break;
  //   default:printf("No has puesto una nota correcta\n");
  //           break;
  // }
  
  // Així es com es posen múltiples opcions en cas de case

  switch (nota) {
    case 10:
    case 9: printf("Tu nota es de excelente\n");
            break;
    case 8:
    case 7: printf("Tu nota es de notable\n");
            break;
    case 6: printf("Tu nota es de bien\n");
            break;
    case 5: printf("Tu nota es de suficiente\n");
            break;
    case 4:
    case 3:
    case 2: printf("Tu nota es de insuficiente\n");
            break;
    case 1: 
    case 0: printf("Tu nota es de deficiente\n");
            break;
    default:printf("No has puesto una nota correcta\n");
            break;
  }

  return 0;
}
