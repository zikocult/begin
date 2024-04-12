// Ver si un alumno puede pasar de año
// Un alumno no puede pasar con mas de 3 asignaturas suspendidas

#include <iostream>

using namespace std;

int main ()
{
  int suspenso;
  cout << "cuantas asignaturas has cateado" << endl; cin >> suspenso;

  if (suspenso > 3) {
    cout << "tu no pasas calamar, repites" << endl;
  } else {
    cout << "Yo can pass" << endl;
  }
  
  return 0;
}
