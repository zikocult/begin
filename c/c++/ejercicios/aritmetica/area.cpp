#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  
  float base, altura, area;

  cout << "Esto es para un triangulo" << endl;
  cout << "Introduzca la altura del triangulo" << endl;
  cin >> altura;
  cout << "Introduzca la base del triangulo" << endl;
  cin >> base;

  area = (base*altura)/2;
  cout << "El area del triangulo es " << setprecision(3) << fixed << area << endl;

  float base2, area2;

  cout << "Esto es para un cuadrado" << endl;
  cout << "Introduzca la base del cuadrado" << endl;
  cin >> base2;

  area2 = pow(base2,2);
  cout << "El area del cuadrado es " << setprecision(3) << fixed << area2 << endl;

  return 0;
}
