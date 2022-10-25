#include <stdio.h>

long factorial(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return (n * factorial(n - 1));
  }
}

int main(int argc, char *argv[]) {
  int numero;

  printf("Escribe un número\n");
  scanf("%i", &numero);

  for (int i = 0; i <= numero; i++) {
    printf("%li\n", factorial(i));
  }
  return 0;
}

/*

La recursividad funciona de esta forma

   1.- Buscamos el factorial de 5, por lo tanto numero es igual a 5.

   2.- A la función factorial le pasamos como parámetro numero, es decir, 5.

   3.- Entramos a la condición if; ¿numero es menor o igual que 1?, resp: no,
numero vale 5, por lo tanto 5 > 1

   4.- Entramos a else; numero es igual a numero que multiplica al factorial de
numero menos 1, es decir, aquí hay

      una interrogante numero = 5 * 4!, AHORA numero VALE 4 POR LO TANTO EMPIEZA
LA RECURSIVIDAD.

   5.-VOLVEMOS A ENTRAR EN LA FUNCIÓN FACTORIAL, hace el mismo proceso que con
5, pero con numero-1,

   por lo que quedaría de la siguiente forma:

            1.- numero = 5 * 4!, AHORA numero VALE 4

            2.- numero = 4 * 3!, AHORA numero VALE 3

            3.- numero = 3 * 2!, AHORA numero VALE 2

            4.- numero = 2 * 1!, AHORA numero VALE 1

            5.- numero = 1* 0!, AHORA numero VALE 0.

Aquí es donde hace la ultima llamada a si mismo

   6.- Entramos a if() nuevamente, if(numero <= 1), en este instante numero vale
0, por lo tanto, cumple la condición y devuelve 1

De esta manera resolvemos las demás incógnitas, Algo que es importante mencionar
es, como factorial es una

función, un espacio reservado en memoria, guarda las incógnitas pasadas, esto
debido a que no a devuelto ningún valor.

Entonces:

   7.- Ya sabemos que el factorial de cero es igual a 1, por lo tanto, vamos de
abajo hacia arriba, por así decirlo:

             5.- numero = 1 * 0!, y como 0! = 1, entonces 1 * 1 = 1, AHORA
numero vale 1

             4.- numero = 2 * 1!, y como 1! = 1, entonces 2 * 1 = 2, AHORA
numero vale 2

             3.- numero = 3 * 2!, y como 2! = 2, entonces 3 * 2 = 6, AHORA
numero vale 6

             2.- numero = 4 * 3!, y como 3! = 6, entonces 4 * 6 = 24, AHORA
numero vale 24

             1.- numero = 5 * 4!, y como 4! = 24, entonces 5 * 24 = 120, AHORA
numero vale 120

Así es como llegamos al factorial de 5, debemos tomar en cuenta cual es nuestro
caso base y cual nuestro caso general por

ello la condicional if(numero <= 1) o if(numero == 0), esto debido a que sabemos
que el factorial de 0 es uno y el factorial

de un numero distinto a cero es el numero multiplicado por la resta del mismo
numero menos uno.

   8.- Mostramos los resultados con ciclo for(), esto es posible debido a que
solo imprime el resultado de la

   función cuando le pasamos como parámetro el numero con la iteracion, es
decir, se cuenta de 0 a 5 y factorial tiene como parámetro i:

         factorial(i)

            --> Cuando i es igual a 0, factorial tiene como parámetro 0

            --> Cuando i es igual a 1, factorial tiene como parámetro 1

            --> Cuando i es igual a 2, factorial tiene como parámetro 2
 *
*/
