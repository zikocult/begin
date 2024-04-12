#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
  
  float cateto1, cateto2, hipotenusa;
  cout << "Introduzca el valor de los dos catetos" << endl;
  cin >> cateto1 >> cateto2;

  hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
  cout << "El valor de la hipotenusa es = " << setprecision(3) << fixed << hipotenusa << endl;

  return 0;
}
