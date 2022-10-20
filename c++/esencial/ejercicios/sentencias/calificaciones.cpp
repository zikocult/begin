/*Decirle al alumno en base de sus calificaciones
9-10 Excelente
7-8 Notable
6 Bien
5 Suficiente
3-4 insuficinte
0-2 Deficiente
*/

#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  int nota;
  std::cout << "Introduce tu nota" << std::endl;
  std::cin >> nota;

  switch (nota) {
    case 10: std::cout << "Tu nota es un Excelente" << std::endl;
             break;
    case 9: std::cout << "Tu nota es un Excelente" << std::endl;
            break;
    case 8: std::cout << "Tu nota es un Notable" << std::endl;
            break;
    case 7: std::cout << "Tu nota es un Notable" << std::endl;
            break;
    case 6: std::cout << "Tu nota es un Bien" << std::endl;
            break;
    case 5: std::cout << "Tu nota es un Suficiente" << std::endl;
            break;
    case 4: std::cout << "Tu nota es un insuficiente" << std::endl;
            break;
    case 3: std::cout << "Tu nota es un insuficiente" << std::endl;
            break;
    case 2: std::cout << "Tu nota es un insuficiente" << std::endl;
            break; 
    case 1: std::cout << "Tu nota es un deficiente" << std::endl;
            break;
    case 0: std::cout << "Tu nota es deficiente" << std::endl;
            break;
    default:std::cout << "No has puesto una nota correcta" << std::endl;      
            break;
  }

  return 0;
}
