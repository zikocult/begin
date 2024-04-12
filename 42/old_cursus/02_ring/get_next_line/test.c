#include <stdio.h>

void func() {
	static int x = 0; // x es inicializada solo una vez durante las tres llamadas a func()
	int y = 0;
	printf("x= %d y= %d\n", x, y); // muestra el valor de x
	x = x + 1;
	y = y + 1;
}

int main(void) {
	func(); // muestra 0
	func(); // muestra 1
	func(); // muestra 2
	return 0;
}
