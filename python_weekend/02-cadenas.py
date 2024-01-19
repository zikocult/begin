print("\n############## CADENAS DE TEXTO #################\n")

cadena = "Ejemplo!"
print("Imprimiendo el contenido de la variable en su totalidad -->", cadena)
print("También podemos acceder a las diferentes partes de la cadena como si fuera un array, var[x]")
# i = 0
# for i in cadena:
#     i = i + 1
#     print("Posición", i, " ", cadena[i])
for i in range(0, len(cadena)):
    print("Posición", i, " ", cadena[i])

print("\nCambio de linea con \\n y tabulacion con \\t")

print(
    "\nVamos a ver las diferentes tipos de colecciones\n\t * Listas\n\t * Tuplas\n\t * Diccionarios \n"
)

print("################## LISTAS #####################\n")

lista = ["Hola", "Mundo", "!"]

print("* Las listas se delimitan con [] -->", lista)
print("* Con len(lista), podemos obtener el número de items =", len(lista))

print("* Accedemos a los items con lista[x] inciando con el 0")
for i in range(0, len(lista)):
    print("Posición", i, " ", lista[i])

listanueva = ["patata", "melocoton", "tomate"]
listafinal = lista + listanueva
print("\n* Las listas se pueden sumar")
print("\t- listafinal = lista + listanueva")
print("\t-", lista, "+", listanueva, "=", listafinal)
