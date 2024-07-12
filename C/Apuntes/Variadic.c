#include <stdarg.h>
#include <stdio.h>

float	average(int num, ...)
{
	int		total;
	va_list	ap;

	total = 0;
	va_start(ap, num);
	for (int i = 0; i < num; i++)
		total += va_arg(ap, int);
	va_end(ap);
	return ((float)total / num);
}

int main (void)
{
	printf("El valor medio es %.2f\n", average(5, 7, 7, 5, 8, 12));
	return (0);
}
