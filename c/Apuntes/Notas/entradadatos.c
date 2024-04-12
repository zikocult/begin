
#include <stdio.h>

int main (int argc, char **argv)
{
	int count = 0;

	for (int i = 0; i <= argc; i++){
		printf("Indice: %d, valor: %s\n", i, argv[i]);
	}
	for (int i = 0; argv[1][i] != '\0'; i++){
		count++;
	}
	printf("El valor total de argc = %d\n", argc);
	printf("%d\n", count);

	return (0);
}
