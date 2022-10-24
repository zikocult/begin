#include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <string>
// #include <cstdlib>
// #include <ios>

using namespace std;

int main (int argc, char *argv[])
{
  
  // int dia;
  // 
  // cout << "Introduzca un día de la semana del 1 al 7" << endl;
  // cin >> dia;
  // 
  // switch (dia) {
  //   case 1: cout << "Seleccionaste el lunes" << endl;
  //           break;
  //   case 2: cout << "Seleccionaste el martes" << endl;
  //           break;
  //   case 3: cout << "Seleccionaste el miércoles" << endl;
  //           break;
  //   case 4: cout << "Seleccionaste el jueves" << endl;
  //           break;
  //   case 5: cout << "Seleccionaste el viernes" << endl;
  //           break;
  //   case 6: cout << "Seleccionaste el sábado" << endl;
  //           break;
  //   case 7: cout << "Seleccionaste el domingo" << endl;
  //           break;
  //   default: cout << "Ninguna de las anteriores" << endl;      
  //           break;
  // }
  
  char vocal;

  cout << "Introduzca una vocal" << endl;
  cin >> vocal;
  
  switch (vocal) {
    case 'a': cout << "Seleccionaste la A" << endl;
            break;
    case 'e': cout << "Seleccionaste la E" << endl;
            break;
    case 'i': cout << "Seleccionaste la I" << endl;
            break;
    case 'o': cout << "Seleccionaste la O" << endl;
            break;
    case 'u': cout << "Seleccionaste la U" << endl;
            break;
    default: cout << "Eso no es una vocal tarugo!" << endl;
            break;
  }
  
  return 0;
}
