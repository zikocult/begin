#include <iostream>
#include <iomanip>
#include <cstring>
// #include <string>
// #include <cstdlib>
// #include <ios>

using namespace std;


int main (int argc, char *argv[])
{
  // SALIDAS

  int hola = 1;

  cout << "2 menos 1 igual a " << hola << endl;

  int q =12;
  float w = 44.232;
  char e = 'A';

  cout << q << " " << w << " " << e << endl;

  // ENTRADAS

  // Dejo comentado el procedimiento como sería en C, queda actualizado a C++ usando la librería string

  // char nombre[40], apellido[40]; //char funciona mejor que en C con el cin 
  // int entero;
  float real;
  string nombre1;
  
  // cout << "Escribe tu nombre" << endl;
  // cin >> nombre;
  // cout << "Escribe tu apellido" << endl;
  // cin >> apellido;
  // cout << "El valor que escribiste es igual " << nombre << " "<< apellido << endl;
  cout << "Escribe tu nombre completo" << endl;
  getline(cin, nombre1);
  cout << "Bienvenido " << nombre1 << endl;
  
  // cout << "Escribe el valor de la variable int" << endl;
  // cin >> entero;
  // cout << "El valor que escribiste es " << entero << endl;

  cout << "Escribe el valor de la variable float" << endl; cin >> real;
  cout << "El valor que escribiste es " << setprecision(3) << fixed << real << endl;
  printf("El valor que escribiste, pero usando printf %.3f\n", real);

  return 0;
}
