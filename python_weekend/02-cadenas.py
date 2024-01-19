print("\n############## CADENAS DE TEXTO #################\n")

cadena = "Ejemplo!"
print("Imprimiendo el contenido de la variable en su totalidad -->", cadena, "\n")

print("También podemos acceder a las diferentes partes de la cadena")
print("Como si fuera un array var[x] o un puntero i* avanzando posiciones")
# Dos formes de fer el FOR
# for i in range(0, len(cadena)):
#     print(cadena[i], end=" ")
for i in cadena:
    print(i, end=" ")

print("\n\nPara su acceso de atrás adelante, usamos indices negativos")
print("La última posición se marca como -1 y la primera es -len(var)")
for i in range(-1, (len(cadena) * -1) - 1, -1):
    print(cadena[i], end=" ")

print("\n\nCambio de linea con \\n y tabulacion con \\t")
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
