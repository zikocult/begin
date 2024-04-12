#include <stdio.h>

int main(int argc, char *argv[]) {

  float a, b, c, d, e, f, x, y;
  float ap, cp, dp, fp; // bp, ep;

  printf("Introduzca los elementos de la ecuación ax + bx = c\n");
  scanf("%f %f %f", &a, &b, &c);
  printf("Introduzca los elementos de la ecuación dx + ex = f\n");
  scanf("%f %f %f", &d, &e, &f);

  if ((b < 0 && e < 0) || (b > 0 && e > 0)) {
    ap = a * (-1 * e);
    cp = c * (-1 * e);
    dp = d * b;
    fp = f * b;
  } else if (b < 0 && e > 0) {
    ap = a * e;
    cp = c * e;
    dp = d * b;

  }

  ap = ap + dp;
  cp = cp + fp;

  if (ap == 0) {
    printf("No tiene resultado correcto\n");
  } else {
    x = cp / ap;
    y = (c - (a * x)) / b;
    printf("El resultado es: x = %.2f // y = %.2f \n", x, y);
  }
  return 0;
}
