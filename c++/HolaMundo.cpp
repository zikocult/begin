#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int numero, numero2;
    float numero3;
    cout << "Hola Mundo!!" << endl;
    std::cout << "Hola Mundo 2 con PSL" << std::endl;
//    std::cout << "Introduzca un número" << std::endl; 
//    std::cin >> numero;
//    std::cout << "Aquí va un número " << numero << std::endl;
//    printf("Vamos a probar el printf y te pido otro número para probar el scanf\n");
//    scanf("%i", &numero2);
//    printf("Qué tal se ve %i\n", numero2);
    std::cout << "Prueba de si puedo mezclar cin y printf" << std::endl;
    std::cin >> numero3;
//    std::cout << "a ver ahora" << numero3 << std::endl;
    printf("devolvinendo con printf %.3f \n", numero3);
    return 0;
}
