#include <ios>
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
  float base1, base2, altura, area;
  cout << "Introduzca la base 1" << endl; cin >> base1;
  cout << "Introduzca la base 2" << endl; cin >> base2;
  cout << "Introduzca la base altura" << endl; cin >> altura;

  area = ((base1+base2)/2)*altura;
  cout << "El area del trapecio es igual a " << setprecision(3) << fixed << area << endl;

  return 0;
}
