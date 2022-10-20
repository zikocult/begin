// Pasar de número entero a número romano
#include "iostream"

using namespace std;

int main (int argc, char *argv[])
{
  int romano;
  cout << "Introduce el núemero a convertir" << endl;
  cin >> romano;

  switch (romano) {
    case 10: std::cout << "El número introducido pero en romano es: X" << std::endl;
             break;
    case 9: std::cout << "El número introducido pero en romano es: IX" << std::endl;
            break;
    case 8: std::cout << "El número introducido pero en romano es: VIII" << std::endl;
            break;
    case 7: std::cout << "El número introducido pero en romano es: VII" << std::endl;
            break;
    case 6: std::cout << "El número introducido pero en romano es: VI" << std::endl;
            break;
    case 5: std::cout << "El número introducido pero en romano es: V" << std::endl;
            break;
    case 4: std::cout << "El número introducido pero en romano es: IV" << std::endl;
            break;
    case 3: std::cout << "El número introducido pero en romano es: III" << std::endl;
            break;
    case 2: std::cout << "El número introducido pero en romano es: II" << std::endl;
            break; 
    case 1: std::cout << "El número introducido pero en romano es: I" << std::endl;
            break;
    default:std::cout << "No has puesto una nota correcta" << std::endl;      
            break;
  } 

  return 0;
}
