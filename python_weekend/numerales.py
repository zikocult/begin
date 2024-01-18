print("\n ############ OPERANDOS ############\n")

print("True or false 8 = 9:", 8 == 9)
print("True or false 8 < 9 or 5 > 5:", 8 < 9 or 5 > 5)
print("True or false 8 < 9 and 5 > 5:", 8 < 9 and 5 > 5)
print("True or false 8 < 9 and 5 >= 5:", 8 < 9 and 5 >= 5)
print("True or false not (8 < 9 and 5 >9):", not (8 < 9 and 5 > 9))

print("\n ############ ARITMETICA ############\n")

print("El resultado de la suma 2 + 2 es =", 2 + 2)
print("El resultado de la operación 50 - 5*6 es =", 50 - 5 * 6)
print("El resultado de la operación (50 - 5*6) / 4 es =", (50 - 5 * 6) / 4)

print("\nEl resultado de la división 17 / 3 es =", 17 / 3)
print("El resultado de la división 17 / 3 es (amd dos decimals) =", round(17 / 3, 2))
print("El resultado de la división 17 // 3 (sense part fraccional) es =", 17 // 3)
print("El resultado de la división 17 % 3 (el resto) es =", 17 % 3)

print("\nLa potencia de 5 a la 2 (5**2) =", 5**2)
print("La potencia de 2 a la 7 (2**7) =", 2**7)

print("\n ############ FIBONACCI ############\n")

i, a, b = 0, 0, 1
repes = int(input("¿Cuantas veces quiere repetir? "))
while i < repes:
    print(a, " ")
    i, a, b = i + 1, b, a + b

# Si es posa tot en una linea, no es necessari crear un auxiliar
# Així es tindría que fer a C:
# include <stdio.h>
#
# int main() {
# 	int i = 0, a = 0, b = 1, auxiliar, repes;
#
# 	printf("Introduzca número de repeticiones: ");
#   	scanf("%i", &repes);
#
#   	while (i < repes) {
#     	    printf("%i ", a);
#     	    auxiliar = b;
#     	    b = a + b;
#     	    a = auxiliar;
#     	    i++;
#   	}
#   	printf("\n");
#   	return (0);
# }
